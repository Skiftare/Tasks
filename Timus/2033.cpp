#include <bits/stdc++.h>
#define int long long
const int inf = 1e7+9;
using namespace std;
struct smart{
    int min_price;
    int count;
    string name;
};
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    vector <smart> mas;
    string a,b;
    int q;
    smart mob;
    bool flag = false;
    for(int i = 0;i<6;i++){
        cin>>a;
        cin>>b;
        cin>>q;
        flag = false;
        for(int j = 0;j<mas.size();j++){
            if(mas[j].name == b){
                mas[j].min_price = min(mas[j].min_price,q);
                mas[j].count++;
                flag = true;
                break;
            }
        }
        if(flag == false){
            mob.min_price = q;
            mob.count = 1;
            mob.name = b;
            mas.push_back(mob);
        }
    }
    int max_count = 0;
    int i_max= 0;
    flag = false;
    for(int i = 0;i<mas.size();i++){
        if(max_count < mas[i].count){
            max_count = mas[i].count;
            i_max = i;
        }
    }
    int min_price = inf;
    for(int i = 0;i<mas.size();i++){
        if(max_count == mas[i].count and i_max != i){
            flag = true;
            break;
        }
    }
    if(flag == false){
        cout<<mas[i_max].name<<endl;
    }

    else{
        for(int i = 0;i<mas.size();i++){
            if(max_count == mas[i].count){
                if(min_price > mas[i].min_price){
                    min_price = mas[i].min_price;
                    i_max = i;
                }
            }
        }
        cout<<mas[i_max].name<<endl;
    }


    return 0;
}
