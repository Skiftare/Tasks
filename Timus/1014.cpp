#include <bits/stdc++.h>
#define int long long
using namespace std;
const int inf = 1e9+7;
bool fun(int n)
{
    for (int i=9;i>1;i--)
        if (n%i==0 and (n/i>9 ? fun(n/i) : (i = i + (n/i)*10)))
        {
            cout << i;
            return 1;
        }
    return 0;
}

signed main()
{
    int n;
    cin >> n;
    if (n<10)
        cout << (n==0 ? 10:n);
    else
    if (!fun(n))
        cout << -1;
    return 0;
}
