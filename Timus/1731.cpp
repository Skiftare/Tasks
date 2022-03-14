#include <bits/stdc++.h>
#define int long long
const int inf = 1e9+7;
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        cout<<i+1<<' ';
    }
    cout<<endl;
    for(int i = 0;i<m;i++){
        cout<<1+(i+1)*n<<' ';
    }
    return 0;
}
