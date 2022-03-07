#include <bits/stdc++.h>
#define int long long
using namespace std;
const int inf = 1e9+7;
signed main() {
    string s;
    cin>>s;
    int n = s.length();
    vector <int> mas(n+1);
    mas[0] = 5;
    for(int i = 1;i<n+1;i++){
        mas[i] = s[i-1]-'a';
    }
    int k=0;
    for(int i = 0;i<n;i++){
        mas[i] = mas[i] + 26*k;
        if(mas[i]-26*k > mas[i+1]){
            k++;
        }
    }
    mas[n] += 26*k;
    string ans = "";
    ans = char(mas[1]-5+'a');
    for(int i = 2;i<n+1;i++){
        ans = ans + char(mas[i] - mas[i-1] + 'a');
    }
    cout<<ans<<endl;
    return 0;
}
