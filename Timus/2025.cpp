#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int t,n,k,ans,buf,qq;
    cin>>t;
    for(int i = 0;i<t;i++){
        cin>>n>>k;
        buf = n/k;
        qq = n%k;
        ans = (buf * (n-buf) * (k-qq) + (buf+1)*(n-buf-1)*qq)/2;
        cout<<ans<<endl;
    }
    return 0;
}
