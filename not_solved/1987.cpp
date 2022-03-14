#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int n;
    cin>>n;
    vector <pair<int,int>> mas (n);
    // mas[i] = len, a;
    int a,b,c;
    for(int i = 0;i<b;i++){
        cin>>a>>b;
        mas[i] = make_pair(b-a,a);
    }
    sort(mas.begin(),mas.end());
    


    return 0;
}
