#include <bits/stdc++.h>
#define int long long
const int inf = 1e7+9;
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int i=1;
    srand((unsigned)time(0));
    char r;
    int n = 1000000;
    while(i<n+1)
    {
        r = (char)((rand()%'z')+1);
        if(r >= 'a' && r<='z')
        {
            cout << r;
            i++;
        }
    }
    cout<<endl;
    return 0;
}
