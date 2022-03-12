#include <bits/stdc++.h>
#define int double
using namespace std;

signed main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k1,k2,k3;
    cin>>k1>>k2>>k3;
    cout<<round(1000*k3/((k3/k1) + (k3/k2) + 1))<<endl;
    return 0;
}
