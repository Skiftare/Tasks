#include <bits/stdc++.h>
#define int double
const int inf = 1e9+7;
const int pi = 1.7724538509055159;
using namespace std;
int s(int type,int a){
    if(type == 1) return 2*a;
    if(type == 2) return a;
    return a*sqrt(3)*0.5;

}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int type, infinity;
    int n,a;
    int ans = 0;

    cin>>type>>infinity;
    cin>>n;

    if(type == 1)infinity *= 2;
    else if(type == 2) infinity *= sqrt(2);

    for(int i = 0;i<n;i++){
        cin>>type>>a;
        if(s(type,a) <= infinity) ans++;
    }
    cout<<(int)ans<<endl;
    return 0;
}
