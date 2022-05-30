// If you copy paste my solution I will murder you in your sleep.
#include <bits/stdc++.h>
#define int long long

using namespace std;
const double d = 0.7071067811865475;

signed solve(){
    string s;
    cin>>s;
    double x = 0;
    double y = 0;
    double mas_x []  = {-d,0,d, -1,0,1,-d,0,d};
    double mas_y []  = {-d,-1,-d, 0,0,0,d,1,d};
    for(int i = 0;i<s.size() and s[i] != '0'; i++){
        x+= mas_x[s[i]-'1'];
        y+= mas_y[s[i]-'1'];
    }
    cout<<fixed<<setprecision(10)<<x<<' '<<fixed<<setprecision(10)<<y;

    return 0;

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int test = 1;
    //cin>>test;

    while(test--){
        solve();
    }
    return 0;
}
