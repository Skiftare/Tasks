#include <bits/stdc++.h>
#define int long long
const int inf = 1e9+7;
const int pi = 3.1415926535;
using namespace std;
int f(int n){
    if(n==0) return 10;
    else if(n==1)return 50;
    else if(n==2) return 100;
    else if(n==3) return 500;
    else if(n==4) return 1000;
    else if(n==5) return 5000;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector <int> c (6);
    int min_delta = -1;
    int sum = 0;
    int price = 0;
    for(int i = 0;i<6;i++){
        cin>>c[i];
        if(min_delta <0 and c[i] >0) min_delta = f(i);
    }
    vector <int> ans;
    cin>>price;
    sum = c[0]*10+c[1]*50+c[2]*100+c[3]*500+c[4]*1000+c[5]*5000;
    for(int i = sum - min_delta+1;i<sum+1;i++){
        if(i%price == 0) ans.push_back(i/price);
    }
    std::sort(ans.begin(), ans.end());
    cout<<ans.size()<<endl;
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<' ';
    }
    return 0;
}
