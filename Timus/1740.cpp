// If you copy paste my solution I will murder you in your sleep.
#include <bits/stdc++.h>
#define int long long
using namespace std;
signed solve(){
    int l,k,h;
    cin>>l>>k>>h;
    if(l% (k) == 0) cout<<l/(k) * h<<".00000000 " <<l/(k)*h<<".00000000";
    else cout<<l/(k)*h<<".00000000 " <<l/(k)*h + h<<".00000000";
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
