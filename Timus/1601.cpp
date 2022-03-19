#include <bits/stdc++.h>
#define int unsigned long long
const int inf = 1e9+7;
using namespace std;

signed main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    char c;
    int i,j;
    bool f=true;
    while (cin.get(c))
    {
      if (f)
        {
            if ('a'<=c and c<='z') {c=(char)((int)(c)-32); }
            if ('A'<=c and c<='Z') f=false;
        }
      else
        {
            if ('A'<=c and c<='Z') c=(char)((int)(c)+32);
        }
      if (c=='.' or c=='?' or c=='!') f=true;
        cout<<c;
    }
    
    return 0;
}
