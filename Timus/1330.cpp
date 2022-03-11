#include <bits/stdc++.h>
#define int long long
using namespace std;
const int inf = 1e9+7;

signed main()
{
    int n;
    int a,b;
    cin>>n;
    vector <int> pref(n+1);
    pref[0] = 0;
    cin>>pref[1];
    for(int i = 1;i<n;i++){
        cin>>a;
        pref[i+1] = pref[i]+a;
    }
    /*for(int i = 0;i<n+1;i++){
        cout<<pref[i]<<' ';
    }*/
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>a>>b;
        cout<<(pref[b]-pref[a-1])<<endl;
    }
    return 0;
}
