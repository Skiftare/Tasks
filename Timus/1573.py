d = [1] * 101
k = 0
n = 0
def f(n,k):
    return d[n] / (d[k] * d[max(n - k, 0)])

for i in range(2,101): d[i] = d[i-1]*i
a=0
b=0
c=0
a1 = 0
b1=0
c1=0
a,b,c = list(map(int,input().split()))
k = int(input())
for i in range(k):
    s = input()
    if (s == "Blue"): a1+=1
    elif (s == "Red"): b1+=1;
    else: c1+=1
ans = f(a,a1)*f(b,b1)*f(c,c1)
print((int)(ans))
