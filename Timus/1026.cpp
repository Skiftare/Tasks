#include <bits/stdc++.h>
#define int long long
const int inf = 1e7+9;
using namespace std;
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n;
    cin>>n;
    vector <int> mas(n);
    for(int i = 0;i<n;i++){
        cin>>mas[i];
    }
    std::sort(mas.begin(), mas.end());
    string s;
    cin>>s;
    cin>>n;
    int a;
    for(int i = 0;i<n;i++){
        cin>>a;
        cout<<mas[a-1]<<endl;
    }
    return 0;
}
