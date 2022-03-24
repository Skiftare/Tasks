#include <bits/stdc++.h>
#define int long long
const int inf = 1e9+7;
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int ans = 0;
    int sum;
    int a,b;
    cin>>a;
    vector <int> mas1(a);
    for(int i = 0;i<a;i++) cin>>mas1[i];
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        if(ans == 0) {
            for (int j = 0; j < mas1.size(); j++) {
                if (mas1[j] + b == 10000) {
                    ans = 1;
                    break;
                }
                else if (mas1[j] + b > 10000) break;
            }
            if (mas1[mas1.size() - 1] + b < 10000 and ans != 1) {
                ans = -1;
                break;
            }
        }
    }

    cout<<(ans == 1 ? "YES":"NO")<<endl;
    return 0;
}
