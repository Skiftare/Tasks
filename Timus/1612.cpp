// If you copy paste my solution I will murder you in your sleep.
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed solve() {
    string s;
    string tram = "tram";
    string trol = "trolleybus";
    int check = 0;
    while(cin>>s){
        if(s.size() >= tram.size()){
        for(int i = 0;i<s.size()- tram.size()+1;i++){
            if(s.substr(i,tram.size()) != tram) continue;
            if(!i and(s.size() == tram.size() or 'a' >s[tram.size()] or s[tram.size()] >'z')) check++;
            if(i and ('a' >s[i-1] or s[i-1] >'z') and (i+tram.size() == s.size() or 'a'>s[i+tram.size()] or s[i+tram.size()] >'z')) check++;

        }}
        if(s.size()>=trol.size()){
        for(int i = 0;i<s.size()- trol.size()+1;i++){
            if(s.substr(i,trol.size()) != trol) continue;
            if(!i and(s.size() == trol.size() or 'a' >s[trol.size()] or s[trol.size()] >'z')) check--;
            if(i and ('a' >s[i-1] or s[i-1] >'z') and (i+trol.size() == s.size() or 'a'>s[i+trol.size()] or s[i+trol.size()] >'z')) check--;

        }}
    }
    if(check == 0) cout<<"Bus driver"<<endl;
    else if(check>0) cout<<"Tram driver"<<endl;
    else cout<<"Trolleybus driver"<<endl;
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
