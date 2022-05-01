mas = []
n = int(input())
k = int(input())
mas.append(0);
mas.append(k-1)
for i in range(2, n+1):
    mas.append(mas[i-2] *(k-1) + mas[i-1]*(k-1))
print(mas[n] + mas[n-1])
