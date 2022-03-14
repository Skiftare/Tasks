#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int n;
    cin>>n;
    string s;
    vector <int> mas(n);
    int a,b,c,d;
    a = 0;// 0 1 0 1
    b = 0;// 1 0 1 0
    c = 0;// 1 1 0 0
    d = 0;// 0 0 1 1

    cin>>s;
    int it = 0;
    for(int i = 0;i<s.size();i += 5){
        if(s[i] == '.') mas[it] = 0;
        if(s[i] == '<') mas[it] = 1;
        if(it%2 == 0){
            if(mas[it] == 0){
                b++;
            }
            else{
                a++;
            }
        }
        else{
            if(mas[it] == 0){
                a++;
            }
            else{
                b++;
            }
        }
        if(it < n/2){
            if(mas[it] == 0){
                c++;
            }
            else{
                d++;
            }
        }
        else{
            if(mas[it] == 0){
                d++;
            }
            else{
                c++;
            }
        }
        it++;
    }
    cin>>s;
    cin>>s;
    cout<<min(a,min(b,min(c,d)))<<endl;


    return 0;
}
