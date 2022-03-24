#include <bits/stdc++.h>
#define int double
const int inf = 1e9+7;
const int pi = 3.1415926535;
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int side,len;
    cin>>side>>len;
    if(len>(side/2)*sqrt(2)){
        cout<<fixed<<side*side;
        return 0;
    }
    if((side/2)>=len){
        cout<<fixed<<len*len*pi;
        return 0;
    }
    int cosx=(side/2)/len;
    int sinx=sqrt(1-cosx*cosx);
    int cosA=2*sinx*cosx;
    int theta=acos(cosA);
    cout<<fixed<<len*len*0.5*theta*4+sqrt(len*len-(side/2)*(side/2))*(side/2)*4;
    return 0;
}
