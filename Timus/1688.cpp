#include <bits/stdc++.h>
#define int long long
using namespace std;
const int inf = 1e9+7;
signed main()
{
    int n,m;
    cin>>n>>m;
    int buf;
    int start = -1;
    vector <int> sum(m+1);
    sum[0] = 0;
    n = n*3;
    for(int i = 1;i<m+1;i++){
        cin>>buf;
        sum[i] = sum[i-1] + buf;
        if(sum[i] > n and start == -1) {
            start = i;
        }
    }
    if(start != -1) cout<<"Free after "<<start<<" times."<<endl;
    else cout<<"Team.GOV!"<<endl;
    return 0;
}
