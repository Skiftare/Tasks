n = int(input())
a = 1+(2**n)%100+(3**n)%100+(2**(2*n))%100
if(a%100 == 0): print(2)
elif(a%10 == 0): print(1)
else: print(0)
