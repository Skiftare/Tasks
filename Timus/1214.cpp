#include <bits/stdc++.h>
#define int long long
const int inf = 1e9+7;
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int x,y;
    cin>>x>>y;
    if(x> 0 and y>0) {
        if (x % 2 == 0) {
            if (y % 2 == 1) cout << y << ' ' << x << endl;
            else cout << x << ' ' << y << endl;
        }
        else {
            if (y % 2 == 0) cout << y << ' ' << x << endl;
            else cout << x << ' ' << y << endl;
        }
    }
    else cout << x << ' ' << y << endl;
    return 0;
}
