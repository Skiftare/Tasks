#include <bits/stdc++.h>
#define int long long
const int inf = 1e9+7;
using namespace std;

signed main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n,k;
    string s;
    cin>>n>>k;
    cout<<n*(n-1)/2 - k<<endl;

    return 0;
}
