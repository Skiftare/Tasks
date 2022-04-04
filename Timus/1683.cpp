#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    double n;
    cin>>n;

    vector <int> ans;
    int k = 0;
    while(n > 1){
        ans.push_back((int)floor(n/2));
        n = n-ans[k];
        k++;
    }
    cout<<ans.size()<<endl;
    for(int i = 0;i<ans.size();i++) cout<<ans[i]<<' ';
    return 0;

}
