// If you copy paste my solution I will murder you in your sleep.
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int inf = 1e9+7;
signed solve() {
    int n,s,a;
    cin>>n>>s;
    for(int i = 0;i<n;i++){
        cin>>a;
        cout<<s/a-1<<" ";
        s = a;
    }

    return 0;
}

signed main() {
    int test = 1;
    //cin>>test;
    while(test--){
        solve();

    }

    return 0;
}
