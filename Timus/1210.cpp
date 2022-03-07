#include <bits/stdc++.h>
#define int long long
using namespace std;
const int inf = 1e9+7;
signed main() {
    int n;
    int mas[35][35];
    for(int i = 0;i<35;i++){
        for(int j = 0;j<35;j++) {
            mas[i][j] = inf;
        }
    }
    int k,cost,previous;
    cin>>n;
    char c;
    mas[0][1] = 0;
    for(int nn = 1;nn<n+1;nn++){
        cin>>k;
        for(int i = 1;i<k+1;i++){
            while(true){
                cin>>previous;
                if(previous == 0) break;
                cin>>cost;
                mas[nn][i] = min(mas[nn][i], mas[nn-1][previous] + cost);
            }
        }
        if(nn != n) cin>>c;
        else{
            for(int i = 1;i<k+1;i++){
                mas[nn][i] = min(mas[nn][i], mas[nn][i-1]);
            }
            cout<<mas[n][k]<<endl;
        }

    }
    return 0;
}
