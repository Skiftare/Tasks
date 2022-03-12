#include <bits/stdc++.h>
#define int long long
using namespace std;
const int inf = 1e9+7;
double logbase(double a, double base)
{
    return log(a) / log(base);
}

signed main()
{
    double n,x,d;
    cin>>n>>d>>x;
    if(x==100) cout<<1<<endl;
    else{
        int ans = (int) ceil(logbase(d/n,(1-x/100)));
        cout<<max(ans,(int)0)<<endl;
    }
    return 0;
}
