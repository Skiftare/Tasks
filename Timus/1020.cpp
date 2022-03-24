#include <bits/stdc++.h>
#define int long long
const int inf = 1e9+7;
using namespace std;
int f(int n){
    int ans = 0;
    for(int i = 1;i<n;i++){
        if(n%i == 0) ans+=i;
    }
    return ans;
}


struct point {double x,y;};



signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    double r;

    double ans = 0;
    cin>>n>>r;
    point p[n];
    for(int i=0;i<n;i++)
        cin>>p[i].x>>p[i].y;
    
    for(int i=1;i<n;i++) ans+=sqrt( (p[i].x-p[i-1].x)*(p[i].x-p[i-1].x) + (p[i].y-p[i-1].y)*(p[i].y-p[i-1].y) );
    
    ans+=sqrt( (p[0].x-p[n-1].x)*(p[0].x-p[n-1].x) + (p[0].y-p[n-1].y)*(p[0].y-p[n-1].y) );
    
    ans+=2*r*acos(-1.0);
    
    cout<<fixed<<ans<<endl;

    return 0;
}
