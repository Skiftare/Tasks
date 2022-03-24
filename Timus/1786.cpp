#include <bits/stdc++.h>
#define int long long
const int inf = 1e9+7;
using namespace std;
string infinity = "Sandro";
int f(string a){
    int ans = 0;
    for(int i = 0;i<6;i++){
        if(a[i] == infinity[i]) ans = ans+0;
        else if(abs(infinity[i] - a[i]) ==  32) ans+=1;
        else if('z' - a[i] < 26  and 'z' - infinity[i] < 26) ans+=1;
        else if('Z' - a[i] <26 and 'Z' - infinity[i] <26 and 'Z' - a[i] > -1 and 'Z' - infinity[i] > -1) ans+=1;
        else ans+=2;
    }
    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    int n;
    cin>>s;
    s = s+"*";
    n = s.length();

    int min_val = inf;
    string buf = "";
    for(int i = 0;i<n-6;i++){
        for(int j = i;j<i+6;j++) buf = buf + s[j];
        
        min_val = min(min_val, f(buf));
        buf = "";
    }
    cout<<min_val * 5<<endl;
    return 0;
}
