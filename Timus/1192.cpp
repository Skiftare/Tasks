#include <bits/stdc++.h>
#define int double
const int inf = 1e9+7;
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int v,a,k;
    cin>>v>>a>>k;
    int n,m;
    n = k * v*v* sin(a*(3.1415926535)/90);
    m = (k-1)*10;
    cout<<fixed<<setprecision(2)<<n/m<<endl;
    return 0;
}
