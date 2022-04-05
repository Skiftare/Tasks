#include <queue>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iostream>
#define int long double
using namespace std;
signed main()
{
    long long n;
    cin>>n;
    int k = n+1;
    vector <int> a (n);
    int sum = 0;
    vector <int> pref(n);
    vector <int> ans(n);
    int sigma = 0;
    for(int i = 0;i<n;i++){
        cin>>a[i];
        sum+= a[i];
    }
    for(int i = 0;i<n;i++){
        if(a[i]*k>sum){
            pref[i] = a[i]*k-sum;
            sigma += pref[i];
        }
        else{
            pref[i] = 0;
        }
    }
    if(sigma == 0) for(int i = 0;i<n;i++){
        cout<<0<<' ';
        return 0;
    }
    for(int i = 0;i<n;i++){
        cout<<floor(pref[i]*100/sigma)<<' ';
    }
    return 0;

}
