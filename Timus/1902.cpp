#include <bits/stdc++.h>
#define int float
using namespace std;
const int inf = 1e9+7;


signed main()
{

    int n,t,s;
    cin>>n>>t>>s;
    int ans;
    vector <int> time(n);
    for(int i = 0;i<n;i++){
        cin>>time[i];
        if(time[i] <s) ans = ((s + (time[i] + t)) / 2);
        else ans = ((time[i] + (s + t)) / 2);
        cout<<fixed<<setprecision(6)<<ans<<endl;
    }

    return 0;
}
