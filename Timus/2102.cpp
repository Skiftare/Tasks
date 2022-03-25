#include <bits/stdc++.h>
#define int long long
const int inf = 1e9+7;
const int pi = 1.7724538509055159;
using namespace std;


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    int ans=0;
    cin>>n;
    for(int i = 2;i<min(8e7,ceil(sqrt(n)))+1;i++){
        while(n%i == 0){
            n /= i;
            ans++;
        }
    }
    if(n>1) ans++;
    cout<<(ans == 20 ? "YES":"NO")<<endl;
    return 0;
}
