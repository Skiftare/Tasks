#include <bits/stdc++.h>
//#define int long long
const int inf = 1e9+7;
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n,m;
    cin>>n>>m;
    m = m%n;
    vector <int> mas(2*n);
    for(int i = 0;i<n;i++){
        cin>>mas[i];
        mas[i+n] = mas[i];
    }
    for(int i = 0;i<10;i++){
        cout<<mas[i+m];
    }
    return 0;
}
