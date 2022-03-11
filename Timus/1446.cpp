#include <bits/stdc++.h>
#define int long long
using namespace std;
const int inf = 1e9+7;

signed main()
{
    string s,buf;
    vector <string> a;
    vector <string> b;
    vector <string> c;
    vector <string> d;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin.ignore();
        getline (cin,s);
        cin>>buf;
        if(buf == "Slytherin") a.push_back(s);
        else if(buf == "Hufflepuff") b.push_back(s);
        else if(buf == "Gryffindor") c.push_back(s);
        else d.push_back(s);
    }
    cout<<"Slytherin:"<<endl;
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
    cout<<endl;
    cout<<"Hufflepuff:"<<endl;
    for(int i = 0;i<b.size();i++){
        cout<<b[i]<<endl;
    }
    cout<<endl;
    cout<<"Gryffindor:"<<endl;
    for(int i = 0;i<c.size();i++){
        cout<<c[i]<<endl;
    }
    cout<<endl;
    cout<<"Ravenclaw:"<<endl;
    for(int i = 0;i<d.size();i++){
        cout<<d[i]<<endl;
    }
    cout<<endl;
    return 0;
}
