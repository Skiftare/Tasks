// If you copy paste my solution I will murder you in your sleep.
#include <bits/stdc++.h>
#define int long long

using namespace std;

signed solve(){
    int m1,d1,d2;
    cin>>m1>>d1>>d2;
    int a = m1*d1;
    vector <int> mas(d2);
    int cnt = 0;
    while(cnt != a){
        for(int i = 0;i<d2 and cnt != a; i++){
            mas[i]++;
            cnt++;
        }
    }
    
    for(int i = 0;i<mas.size();i++) cout<<mas[i]<<' ';
    
    
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
