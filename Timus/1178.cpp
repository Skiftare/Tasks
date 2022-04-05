#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;
signed main()
{
    int n;
    cin>>n;
    vector <pair<pair<int,int>,int>> mas(n);
    for(int i = 0;i<n;i++){
        cin>>mas[i].first.first>>mas[i].first.second;
        mas[i].second = i+1;
    }
    std::sort(mas.begin(), mas.end());
    for(int i = 0;i<n;i++){
        cout<<mas[i].second<<' '<<mas[i+1].second<<endl;
        i++;
    }
    return 0;

}
