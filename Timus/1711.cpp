// If you copy paste my solution I will murder you in your sleep.
#include <bits/stdc++.h>
#define int long long
using namespace std;
signed solve(){

    int n;
    cin>>n;
    vector <vector <string>> mas(n,vector<string> (3, ""));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<3;j++) cin>>mas[i][j];
        std::sort(mas[i].begin(), mas[i].end());
    }

    vector<int> order (n);
    for(int i = 0;i<n;i++){
        cin>>order[i];
        order[i]--;
    }
    vector <string> ans;
    int buf;
    ans.push_back(mas[order[0]][0]);
    for(int i = 1;i<n;i++){
        buf = ans.size();
        for(int j = 0;j<3;j++){
            if(mas[order[i]][j] > ans[i-1]){
                ans.push_back(mas[order[i]][j]);
                break;
            }
        }
        if(buf == ans.size()){
            cout<<"IMPOSSIBLE"<<endl;
            return 0;
        }
    }
    for(int i = 0;i<n;i++) cout<<ans[i]<<endl;

    return 0;
}


signed main() {
    int test = 1;
    //cin>>test;

    while(test--){
        solve();
    }



    return 0;
}
