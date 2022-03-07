#include <bits/stdc++.h>
#define int long long
using namespace std;
const int inf = 1e9+7;
signed main() {
    int n;
    int ans = 0;
    cin>>n;
    vector <int> mas (n);
    for(int i = 0;i<n;i++){
        cin>>mas[i];
    }
    std::sort(mas.begin(), mas.end());
    while(std::next_permutation(mas.begin(), mas.end())){
        if(ans>6) break;
        ans++;
    }
    cout<<(ans>4 ? "Yes":"No")<<endl;
    return 0;
}
