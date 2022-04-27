// If you copy paste my solution I will murder you in your sleep.
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
const int N = 1<<14;
const int inf = 14;
struct tree{
    int mas[N];
    tree(){fill(mas,mas+N,0);};
    signed add(int x){
        while(x < N){
            mas[x]++;
            x = x|(x+1);
        }
        return 0;
    }
    signed get(int x){
        int res = 0;
        while(x>-1){
            res+=mas[x];
            x = (x&x+1)-1;
            //cout<<x<<' '<<(x&(x+1)-1)<< endl;
        }

        return res;
    }

};
pair <int,int> final_ans = make_pair(0,1);
signed solve(int pos) {
    int ans = 0;
    tree f;
    int buf;
    //cin>>buf;
    //f.add(buf);
    for(int  i = 0;i<n;i++){
        cin>>buf;
        //cout<<buf<<endl;
        ans+= (i-f.get(buf));
        //cout<<"le cringe"<<endl;
        f.add(buf);
    }
    //cout<<ans<<endl;
    if(ans> final_ans.first){
        final_ans = make_pair(ans,pos);
    }

    return 0;
}

signed main() {
    int test = 1;
    cin>>n;
    cin>>test;
    int res = 0;
    int i_ans = 0;
    int num = 1;
    while(test--){
        solve(num);
        num++;
    }
    cout<<final_ans.second<<endl;
    return 0;
}
