#include <bits/stdc++.h>
#define int long long
const int inf = 1e9+7;

using namespace std;
int p[(int)1e6+2];

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    p[0]=1;
    p[1] = 1;
    for(int i = 2;i<1e6+3;i++) if(p[i] == 0) if(i*i<1e6+3) for(int j = i*i;j<1e6+3;j+=i) p[j] = 1;



    int l,r;
    int a,b;

    int a1,b1;
    cin>>l>>r;
    if(l==1){
        cout<<1<<endl;
        return 0;
    }
    for(int i = r;i>l-1;i--){
        a1=i;
        b1=0;
        if(p[i] == 0){
            b1 = 1;
            a = i;
            break;
        }
        else {
            for (int k = 1; k < sqrt(i) + 1; k++) {
                if (k * k == i) b1 += k;
                 else if (i % k == 0) b1 = b1 + k + i / k;
            }
            if (b1 * a < b * a1) {
                b = b1;
                a = a1;
            }
        }
    }
    cout<<a<<endl;
    return 0;
}
