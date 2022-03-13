#include <bits/stdc++.h>
#define int long long
const int inf = 1e9+7;
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int a,b,c;
    int x,y,z;
    cin>>a>>b>>c;
    cin>>x>>y>>z;
    int q,w;
    q = a;
    w = b;
    a -= min(a,x);
    x -= min(q,x);
    b -= min(y,b);
    y -= min(y,w);

    z -= min(z,(max(a,(int)0)+max(b,(int)0)));

    a = 0;
    b = 0;
    if(c >= x+y+z) cout<<"It is a kind of magic"<<endl;
    else cout<<"There are no miracles in life"<<endl;






    return 0;
}
