#include <bits/stdc++.h>
#define int long long
const int inf = 1e9+7;
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    vector<int> ans;
    ans.push_back(0);
    int t,n;
    vector <int> mas(163841+12);
    mas[0] = -1;
    mas[1] = -1;
    for(int i = 2;i<mas.size();i++){
        if(mas[i] == 0){
            ans.push_back(i);
            if(ans.size() == 15000+1){
                break;
            }
            for(int j = i*i;j<mas.size();j += i){
                mas[j] = -1;
            }
        }
    }
    cin>>t;
    for(int i = 0;i<t;i++){
        cin>>n;
        cout<<ans[n]<<endl;
    }




    return 0;
}
