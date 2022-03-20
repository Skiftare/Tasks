#include <bits/stdc++.h>
#define int long long
const int inf = 1e18+7;
using namespace std;
vector <int> mas(3);
int search(){
    int r = inf;
    for(int i = 0;i<mas.size();i++){
        if(i == 0) r = min(r, abs(mas[i+1] - mas[i]));
        else if(i == mas.size()-1) r = min(r,abs(mas[i-1]-mas[i]));
        else r = min(r,min(abs(mas[i+1] - mas[i]),abs(mas[i-1]-mas[i])));
    }
    if(r == 0){
        return 0;
    }
    else{
        mas.push_back(r);

        std::sort(mas.begin(), mas.end());
        return 1;
    }
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin>>mas[0]>>mas[1]>>mas[2];
    std::sort(mas.begin(), mas.end());
    int i = 0;
    while(true){
        if(search() == 0){
            break;
        }
        i++;
    }
    cout<<i+1<<endl;
    return 0;
}
