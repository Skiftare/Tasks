a = 0
b = 0
n = int(input())
for i in range(1,10):
    for j in range(1,10):
        if(i+j<10):a+=1
for i in range(0,10):
    for j in range(0,10):
        if(i+j<10):b+=1
for i in range(1,n):
    a = a*b
print(a)
