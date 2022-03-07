from collections import deque
n = int(input())
q = deque()
dp = [0]*n
q.append(1)
q.append(2)
dp[2%n]=2
dp[1%n]=1

count = 0
while(len(q) != 0 and dp[0] == 0):
    a = q.popleft()
    if(len(str(a)) > 30): break;
    a = a * 10 + 1
    if (dp[a%n] == 0):
        q.append(a)
        dp[a%n] = a

    a+=1
    if (dp[a%n] == 0):
        q.append(a)
        dp[a%n] = a

if(dp[0] == 0 or count > 30): print("Impossible")
else: print(dp[0])
