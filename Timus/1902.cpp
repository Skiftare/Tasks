#include <bits/stdc++.h>
#define int float
using namespace std;
const int inf = 1e9+7;


signed main()
{

    int n,t,s, t0;
    cin>>n>>t>>s;
    int ans;
    for(int i = 0;i<n;i++){
        cin>>t0;
        if(t0 <s) ans = ((s + (t0 + t)) / 2);
        else ans = ((t0 + (s + t)) / 2);
        cout<<fixed<<setprecision(6)<<ans<<endl;
    }

    return 0;
}
