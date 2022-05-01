// If you copy paste my solution I will murder you in your sleep.
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed solve(){
    int n;
    cin>>n;
    vector <int> a(n);
    vector <int> cnt (n,0);
    cin>>a[0];
    int maxi = a[0];
    int maxi_i = 0;
    for(int i = 1;i<n;i++){
        cin>>a[i];
        cnt[maxi_i]++;
        cnt[i]++;
        if(maxi>a[i]){
            maxi = a[i];
            maxi_i = i;
        }
    }
    maxi = -1;
    maxi_i = 0;
    for(int i = 0;i<n;i++){
        if(cnt[i] > maxi){
            maxi = cnt[i];
            maxi_i = i;
        }
    }
    cout<<maxi_i+1<<endl;
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
