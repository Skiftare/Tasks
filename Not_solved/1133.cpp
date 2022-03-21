#include <bits/stdc++.h>
#define int double
const int inf = 1e9+7;
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int a,b,fa,fb,n;
    int fi1,fi2;
    int k1,k2;
    fi1 = (1-sqrt(5))/;
    fi2 = (1+sqrt(5));
    cin>>a>>fa>>b>>fb>>n;
    k1 = (fb * pow(fi2, a-b) - fa)/(pow(fi2, a-b) * pow(fi1,b) - pow(fi1,a));
    k2 = (fa - k1*pow(fi1,a))/(pow(fi2,a));
    int ans = fi1 * pow(k1,n) + fi2*pow(k2,n);
    cout<<fixed<<ans<<endl;
    return 0;
}
