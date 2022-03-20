#include <bits/stdc++.h>
#define int long long
const int inf = 1e9+7;
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n,a,b;
    cin>>n>>a>>b;
    vector <int> s_a(n+1);
    vector <int> s_b(n+1);
    s_a[0] = 1;
    s_b[0] = 1;
    for(int i = 0;i<n;i++){
        for(int j = 1;j<a+1 and i+j < n+1;j++){
            s_a[i+j] = (s_a[i+j] + s_b[i])%inf;
        }
        for(int j = 1;j<b+1 and i+j< n+1;j++){
            s_b[i+j] = (s_b[i+j] + s_a[i])%inf;
        }
    }
    cout<<(s_a[n]+ s_b[n])%inf<<endl;
    return 0;
}
