# -*- coding: utf-8 -*-


import math
import numpy as np
import pickle
import os
import re
import pathlib
import random

class NGramsCounter:

    def __init__(self, order):
        #print("init n-grams sucsess")
        if order < 1:
            #print("NGramsCounter: order must be > 0, got: ", order)
            order = 1
        #print(order)
        self.order = order
        self.root = {}
        self.ngrams = [0] * (order + 1)

    def restore(self):
        with open('data', 'rb') as file_pkl:
            self.order = pickle.load(file_pkl)
            self.root = pickle.load(file_pkl)
            self.ngrams = pickle.load(file_pkl)
            self.order = pickle.load(file_pkl)

    def store(self):
        with open('data', 'wb') as file_pkl:
            pickle.dump(self.order, file_pkl)
            pickle.dump(self.root, file_pkl)
            pickle.dump(self.ngrams, file_pkl)
            pickle.dump(self.order, file_pkl)


    def add(self, lst):
        print("starts adds")
        print("NGramsCounter::add")
        for n in range(self.order):
            self.ngrams[n + 1] += max(len(lst) - n, 0)
        print("one more sucess")
        for i in range(len(lst)):
            node = self.root
            for n, w in enumerate(lst[i: i + self.order]):
                if w in node:
                    node[w][0] += 1
                else:
                    node[w] = [1, {}]
                node = node[w][1]

            if i % 6400 == 0:
                print('\r', " " * 32, '\r', f"{i * 100 / len(lst):.1f}%")
        print('\r', " " * 32, '\r')
        self.store()

    # ---------------------------------------------------------------------------
    def counts(self, lst):
        if len(lst) == 0:
             #print("NGramsCounter::counts len(lst) must be > 0, got: ", len(lst))
            return 0, 0, self.root

        if len(lst) > self.order:
            lst = lst[-self.order:]

        node = self.root
        n_prv, n_cur = self.ngrams[1], self.ngrams[1]

        for i, w in enumerate(lst):
            # print("still")
            if w in node:
                n_prv = n_cur
                n_cur = node[w][0]
                node = node[w][1]
            else:
                if i == len(lst) - 1:
                    return 0, n_cur, node
                else:
                    return 0, 0, node

        return n_cur, n_prv, node

    # ---------------------------------------------------------------------------
    def prob(self, lst = [], cond=True):

        n_cur, n_prv, _ = self.counts(lst)

        if n_cur == 0:
            return 0

        return n_cur / (n_prv if cond else self.ngrams[len(lst)])

    def branches(self, lst=[]):

        if len(lst) == 0:
            node = self.root
        else:
            n_cur, _, node = self.counts(lst)
            if n_cur == 0:
                return []
        res = [(w, node[w][0]) for w in node]
        return sorted(res, key=lambda kv: -kv[1])

    def unique(self, n=None):
        if not n:
            return [self.unique_rec(self.root, i) for i in range(1, self.order + 1)]
        return self.unique_rec(self.root, n)

    def unique_rec(self, node, n):
        if n <= 0:
            return 1
        s = 0
        for w in node:
            s += self.unique_rec(node[w][1], n - 1)
        return s

    def all_branches(self):
        branches = []
        self.all_branches_rec(self.root, [], 0, branches)
        return branches

    def all_branches_rec(self, node, cur, n_cur, branches):
        if not node:
            branches.append((cur, n_cur))

        for n in node:
            nxt = cur[:] + [n]
            self.all_branches_rec(node[n][1], nxt, node[n][0], branches)


class ClassisGramm:

    def __init__(self, order, counter=None):
        self.order = order  # число n-грамм
        self.counter = NGramsCounter(order) if not counter else counter

    def add(self, text):
        # print(len(text))
        self.counter.add(text)


    def prob(self, lst):
       return self.counter.prob(lst)

    def restoring(self):
        self.counter.restore()

    def perplexity(self, text):
        #Не забыть
        order = self.order
        s, num, eps = 0, len(text) - order, 1e-10
        for i in range(order, len(text)):
            p = self.prob(text[i - order:i])
            if p < eps:
                print("LanguageModel::perplexity: prob:", p, i, text[i - order:i])
                return 0
            s += math.log(p)

        return math.exp(-s / num)

    def generate(self, prelst):
        #next сновываясь на in(len(prelst, order))
        st = []

        #for n in range(num):

        lst = prelst[-self.order + 1:]  # order - 1
            #print(*lst)
        vocab = self.counter.branches()  # все слова
            # print(len(vocab))
        probs = np.array([self.prob(list(list(lst) + [w])) for w, _ in vocab])
            #print(sum(probs))
        if abs(sum(probs) - 1) > 1e-8:
            if 1 - sum(probs) < 1e-4 and sum(probs) <= 1.0:
                probs /= probs.sum()
            else:
                #print("Wrong context P(contex)=0 was created. sum(prob)!=1", sum(probs))
                    #ran = np.random.choice(len(st)-1)
                    #return st[ran]
                i = random.randint(0,len(vocab)-1)

                return vocab[i][0]
        i = np.random.choice(len(probs), 1, p=probs)[0]
        lst += vocab[i][0]
        st.append(str(vocab[i][0]))
        #ran = np.random.choice(1,len(st))
        return str(vocab[i][0])

'''
CG = ClassisGramm(20)
f = open('text.txt', 'r',encoding='utf-8')
res = f.read()
res = res.lower()
need_to_replace = {'.', ',', '/','?', '|', '!', '@', '#', '№', '1','2','3','4','5','6','7','8','9','0','+',')','(', '–', ';',':' }
for it in need_to_replace:
    res = res.replace(it, '')
lst = res.split()

CG.add(lst)
'''
