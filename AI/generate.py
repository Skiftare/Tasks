from main import *


try:
    CG = ClassisGramm(1)
    CG.restoring()
except:
    from train import *




print("Please, input first world.")
s = input()
print("Please, input length of text")
len = int(input())
print(s)
res = [s]
for i in range (len):
    generated = CG.generate(res)
    res.append(generated)
    #print(i)
for it in res: print(it, end = " ")