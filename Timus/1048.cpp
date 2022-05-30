// If you copy paste my solution I will murder you in your sleep.
#include <bits/stdc++.h>
#define int long long

using namespace std;

signed solve(){
    int n;
    cin>>n;
    int a,b,buf;
    buf = 0;
    stack <int> mas;
    for(int i = 0;i<n;i++){
        cin>>a>>b;
        mas.push(a+b);
    }
    string s = "";
    for(int i = n-1;i>-1;i--){
        a = mas.top();
        mas.pop();
        a+= buf;
        buf = a/10;
        s+= to_string(a%10);
    }
    std::reverse(s.begin(), s.end());
    cout<<s<<endl;

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
