n = int(input())
if(n == 2 or n==1 or n ==3):
    print(n)
else:
    dp = [0]*(n+1)
    dp[1] = 1
    dp[2] = 2
    dp[3] = 3
    for i in range(4,n+1):
        for j in range(max(i//2-4, 0),min(i//2 + 4 ,i)):
            dp[i] = max(dp[i],dp[j]*dp[i-j])
    print(dp[n])
