#include <iostream>
#include <algorithm>
using namespace std;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    long long dp[n+1];
    dp[0] = 1;
    for(int i = 0;i<n+1;i++)dp[i] = 0;
    dp[0] = 1;
    for(int i = 1;i<n+1;i++){
        for(int j = n;j>=i;j--){
            dp[j] += dp[j-i];
        }
    }
    cout<<dp[n]-1<<endl;
    return 0;

}
