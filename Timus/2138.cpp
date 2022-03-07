#include <bits/stdc++.h>
#define int long long

using namespace std;
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;
    int n;
    cin>>n;
    int a = n/16777216;
    n = n%16777216;
    int b = n/65536;
    n = n%65536;
    int c = n/256;
    int d = n%256;
    cout<<a + b*256+c*65536+d*16777216<<endl;

    return 0;
}
