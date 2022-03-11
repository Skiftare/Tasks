#include <bits/stdc++.h>
#define int long long
using namespace std;
const int inf = 1e9+7;


signed main()
{

    int n,x;
    cin>>n>>x;
    int plus = inf;
    int minus = -inf;
    int buf;
    for(int i = 0;i<n;i++){
        cin>>buf;
        if(buf>0) plus = min(buf,plus);
        else minus = max(minus,buf);
    }
    if(x == 0){
        cout<<0<<' '<<0<<endl;
        return 0;
    }
    if(x>0){
        if(plus < x) {
            cout<<"Impossible"<<endl;
            return 0;
        }
        else{
            cout<<x<<' '<<-minus*2+x;
        }
    }
    else{
        if(minus > x){
            cout<<"Impossible"<<endl;
            return 0;
        }
        else{
            cout<<plus*2-x<<' '<<-x<<endl;
        }
    }

    return 0;
}
