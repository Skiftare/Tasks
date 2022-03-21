#include <bits/stdc++.h>
#define int long long
const int inf = 1e9+7;
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int k,s;
    cin>>s;
    k = 9;
    int dp[k+1][s+1];
    for(int i = 0;i<k+1;i++){
        for(int j = 0;j<s+1;j++){
            dp[i][j] = 0;
        }
    }
    dp[0][0] = 1;
    for(int i = 1;i<k+1;i++) for(int j = 0;j<s+1;j++) for(int c = 0;c<10 and j-c > -1 ;c++) dp[i][j] += dp[i-1][j-c];
    cout<<(s==1 ? 10:dp[k][s])<<endl;
    return 0;
}
