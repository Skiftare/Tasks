#include <bits/stdc++.h>
#define int long long
const int inf = 1e9+7;
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    string s;
    int n = 0;
    int min_base = 1;
    cin>>s;
    int a;
    for(int i = 0;i<s.size();i++){
        if(s[i] - 'A' <0) a = s[i]-'0';
        else a = s[i] - 'A' + 10;
        min_base = max(min_base, a);
        n+= a;
    }
    for(int k = min_base+1;k<37;k++){
        if(n%(k-1) == 0){
            cout<<k<<endl;
            return 0;
        }
    }
    cout<<"No solution."<<endl;
    return 0;
}
