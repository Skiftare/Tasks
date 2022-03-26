#include <bits/stdc++.h>
#define int long long
const int inf = 1e9+7;
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    string s;
    cin>>s;
    if(s.length() == 1){
        cout<<s<<s<<endl;
        return 0;
    }
    else if(s.length() == 2){
        cout<<s<<s[0]<<endl;
        return 0;
    }
    int n = s.length();
    int maxi = 0;
    for(int i = n/2;i<n;i++){
        maxi = 0;
        int maxi2 = -1;
        int k = 1;
        bool flag = true;
            while (flag) {
                if (i - k > 0 and i + k < n) {
                    if (s[i - k] == s[i + k]) maxi++;
                    else flag = 0;
                } else flag = 0;
                k++;
            }
        k = 1;
        flag = 1;
        if(i > n/2) {
            while (flag) {
                if (i - k > 0 and i + k - 1 < n) {
                    if (s[i - k] == s[i + k - 1]) maxi2++;
                    else flag = 0;
                }
                else flag = 0;
                k++;
            }
        }
        if(maxi2+i == n-1){
            for(int j = i-maxi2-2;j>-1;j--) s = s+s[j];
            cout<<s<<endl;
            return 0;
        }
        if(maxi+i == n-1){
            for(int j = i-maxi-1;j>-1;j--) s = s+s[j];
            cout<<s<<endl;
            return 0;
        }
    }
    return 0;
}
