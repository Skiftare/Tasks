#include <bits/stdc++.h>
#define int long long
using namespace std;
const int inf = 1e9+7;


signed main()
{

    int n;
    cin>>n;
    int k = floor(sqrt(n));
    if(pow(k,2) == n) cout<<1<<endl;
    else{
        for(int i = 1;i<k+1;i++){
            for(int j = 1;j<k+1;j++){
                if(i*i + j*j ==n){
                    cout<<2<<endl;
                    return 0;
                }
            }
        }
        for(int i = 1;i<k+1;i++) {
            for (int j = 1; j < k + 1; j++) {
                for (int q = 0; q < k+1; ++q){
                    if(i*i + j*j + q*q == n){
                        cout<<3<<endl;
                        return 0;
                    }
                }
            }
        }
        cout<<4<<endl;
    }
    return 0;
}
