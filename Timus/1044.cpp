#include <bits/stdc++.h>
#define int long long
using namespace std;
const int inf = 1e9+7;


signed main()
{
    /*string s;
    int ans,n,a,b;
    for(int j = 2;j<9;j++){
        if(j%2 == 0) {
            ans = 1;

            n = 1;
            s = to_string(n);
            while (s.size() <= j) {
                if(s.size()< j){
                    while(s.size() != j){
                        s = '0' + s;
                    }
                }
                a = 0;
                b = 0;

                for (int i = 0; i < j / 2; i++) {
                    a += (int) (s[s.size() - i - 1] - '0');
                    b += (int) (s[i] - '0');
                }
                if (a == b) {
                    ans++;
                }
                n++;
                s = to_string(n);
            }
            cout << ans << endl;
        }
    }*/
    //10
    //670
    //55252
    //4816030
    vector <int> mas;
    mas.push_back(10);
    mas.push_back(670);
    mas.push_back(55252);
    mas.push_back(4816030);
    int n;
    cin>>n;
    cout<<mas[n/2 - 1]<<endl;
    return 0;
}
