#include <bits/stdc++.h>
//#define int long long
#define INF 1e9

using namespace std;

signed main()
{
    int n;
    cin>>n;
    vector <int> x (n);
    vector <int> y (n);
    int maxi = 0;
    for(int i = 0;i<n;i++){
      cin>>x[i]>>y[i];
      maxi = max(maxi, (int)(pow(x[i],2) + pow(y[i],2)) );

    }
    cout<<0<<' '<<0<<' '<<setprecision(16-7)<<fixed<<sqrt(maxi)<<endl;
    return 0;
}
