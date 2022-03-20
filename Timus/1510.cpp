#include <bits/stdc++.h>
//#define int long long
const int inf = 1e9+7;
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n;
    int a;
    int cnt;
    int candidate;
    cin>>n;
    vector <int> q(n);
    while(n>0){
        cin>>q[n-1];
        n--;
    }
    std::sort(q.begin(), q.end());

    cout<<q[q.size()/2]<<endl;
    return 0;
}
