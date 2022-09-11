from main import *

try:
    CG = ClassicGram(1)
    CG.restoring()
except:
    from train import *
    
print("Please, input first world.")
s = input()
print("Please, input length of text")
len = int(input())
res = [s]
for i in range (len):
    generated = CG.generate(res)
    res.append(generated)
for it in res: print(it, end = " ")
