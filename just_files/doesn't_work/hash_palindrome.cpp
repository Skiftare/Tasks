#include <bits/stdc++.h>
//#include <sstream>
#define int long long
using namespace std;
string s, rev_s;
int n;
const int inf = 1e9+7;
bool check(vector<int> &h, vector<int> &rev_h, vector<int> &p_pow, int l,int r){
    int rev_l = n - (r+1);
    int rev_r = n - (l+1);
    int getHash = (h[r] - h[l])%inf;
    int getRevHash = (rev_h[rev_r] - rev_h[rev_l])%inf;
    getHash = getHash * p_pow[rev_l];
    getRevHash = getRevHash * p_pow[l];
    return getHash == getRevHash;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    /*
    7
    dabbacc
    */

    cin>>n;
    cin>>s;
    //n = 1e5;
    //s = "a"*n;
    //cout<<s<<endl;
    //s = rev_s;
    //reverse(rev_s.begin(),rev_s.end());
    const int p = 31;
    int best = 0;
    vector <int> p_pow (n);
    p_pow[0] = 1;
    vector<int> h (n);
    vector<int> rev_h(n);
    for(int i = 0;i<n;i++){
        if(i) p_pow[i] = p_pow[i-1]*p;

        h[i] = ((s[i] - 'a'+ 1 )*p_pow[i])%inf;
        rev_h[i] = ((s[n-1-i] -'a' + 1)*p_pow[i])%inf;
        if(i) {
            h[i]+=h[i-1];
            rev_h[i] += rev_h[i-1];
        }
        h[i] = h[i]%inf;
        rev_h[i] = rev_h[i]%inf;
    }

    vector<int> odd_c(n);
    vector<int> even_c(n);
    for(int i = 0;i<n;i++){
        int l_odd = 1;
        int r_odd = min(i+1,n-i);
        while(l_odd<=r_odd){
            int m = (l_odd+r_odd)/2;
            if(check(h, rev_h, p_pow, i-m+1,i+m-1)){
                odd_c[i] = m;
                l_odd = m+1;
            }
            else{
                r_odd = m-1;
            }
        }
        best = max(best,2*odd_c[i]-1);
        int l_even = 1;
        int r_even = min(i,n-i);
        while(l_even<=r_even){
            int m = (l_even+r_even)/2;
            if(check(h,rev_h,p_pow,i-m,i+m-1)){
                even_c[i] = m;
                l_even=m+1;
            }
            else{
                r_even=m-1;
            }
        }
        best = max(best, 2*even_c[i]);
    }
    cout<<best<<endl;
    return 0;
}
