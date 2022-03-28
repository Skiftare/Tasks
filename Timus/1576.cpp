#include <bits/stdc++.h>
const int inf = 1e9+7;
using namespace std;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n1,c1,n2,t,c2,n3;
    cin>>n1>>c1;
    cin>>n2>>t>>c2;
    cin>>n3;
    int a,b, test;
    int sum_min = 0;
    int buf;
    cin>>test;
    string s;
    while(test>0){
        //scanf("%d:%d", &a, &b);
        cin>>s;
        a = (s[0] - '0')*10 + (s[1]-'0');
        b = (s[3] - '0')*10 + (s[4]-'0');
        buf = a*60+b;
        sum_min += (buf>6 ? ((buf+59)/60) :0);
        test--;
    }
    cout<<"Basic:     "<<n1 + sum_min*c1 << endl;
    cout<<"Combined:  "<<n2 + max(sum_min-t,0)*c2<<endl;
    cout<<"Unlimited: "<<n3<<endl;
    return 0;
}
