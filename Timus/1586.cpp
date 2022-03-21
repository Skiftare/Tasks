#include <bits/stdc++.h>
#define int long long
const int inf = 1e9+9;
using namespace std;
set <int> num;
int sum(int a,int b){
    return (a+b)%inf;
}
int check(int n){

    for(int i = 2;i<floor(sqrt(n))+1;i++){
        if(i!= n){
            if(n%i == 0){
                return -1;
            }
        }
    }
    num.insert(n);
    return 0;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    
    for(int i = 100;i<1000;i++) check(i);
    
    int n;
    cin>>n;
    int dp[n+2][10][10];
    for(int i = 0;i<n+1;i++){
        for(int j = 0;j<10;j++){
            for(int c = 0;c<10;c++) dp[i][j][c] = 0;
            
        }
    }
    for(int i = 100;i<1000;i++){
        if(check(i) == 0) dp[3][(i/10)%10][i%10]++;
    }
    int ans = 0;
    for(int q = 3;q<=n;q++){
        for(int i = 0;i<10;i++){
            for(int j = 0;j<10;j++){
                for(int k = 0;k<10;k++) if(num.find(k*100+i*10+j) != num.end()) dp[q+1][i][j] = sum(dp[q][k][i],dp[q+1][i][j]);
                if(q == n) ans = sum(ans,dp[q][i][j]);
            }
        }

    }
    cout<<ans<<endl;
    
    
    return 0;
}
