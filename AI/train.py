from main import *
def rep(s):
    re.sub('[^A-Za-zА-Яа-я\s]', '', s)
    return s


print("please input path to the training text file ")
path = input()
print("please input N for N-grams")
N = int(input())
CG = ClassisGramm(N)
f = open(path, 'r',encoding='utf-8')
res = f.read()
res = res.lower()
res = re.sub('[^A-Za-zА-Яа-я\s]', '', res)
lst = res.split()
#print(*lst)
CG.add(lst)
print("100%")