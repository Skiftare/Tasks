#include <bits/stdc++.h>
#define int unsigned long long
const int inf = 1e9+7;
using namespace std;

signed main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    vector <int> mas = {2, 3, 5, 7, 13, 17, 19, 31, 61, 89, 107, 127, 521, 607, 1279, 2203, 2281, 3217, 4253, 4423, 9689, 9941, 11213, 19937, 21701, 23209, 44497, 86243, 110503, 132049, 216091, 756839, 859433, 1257787, 1398269, 2976221, 3021377, 6972593, 13466917, 20996011, 24036583, 25964951, 30402457, 32582657, 37156667, 42643801, 43112609, 57885161};


    int t,n;
    cin>>t;
    for(int i = 0;i<t;i++){
        cin>>n;
        cout<<mas[n-1]<<endl;
    }

    return 0;
}
