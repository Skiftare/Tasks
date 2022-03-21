#include <bits/stdc++.h>
#define int long long
const int inf = 1e9+7;
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n,k;
    cin>>n>>k;
    cout<<max((int)0,max(n-k-2,k-3))<<endl;
    return 0;
}
