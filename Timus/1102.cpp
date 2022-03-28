#include <bits/stdc++.h>
const int inf = 1e9+7;
using namespace std;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test;
    string s;
    cin>>test;
    while(test>0){
        string s;
        string a,b,c,d;
        cin>>s;
        int n = s.length();
        vector <bool> mas (n+9,0);
        mas[0] = 1;
        for(int i = 0;i<n;i++){
            if(mas[i]) {
                a = "";
                b = "";
                c = "";
                d = "";
                for (int j = 0; j < min(6, n - i); j++) {
                    if (j < 2) {
                        c += s[i + j];
                        a += s[i + j];
                        b += s[i + j];
                        d += s[i + j];
                    }
                    else if (j < 3) {
                        a += s[i + j];
                        b += s[i + j];
                        d += s[i + j];
                    }
                    else if (j < 5) {
                        a += s[i + j];
                        d += s[i + j];
                    }
                    else d += s[i + j];
                }
                if (a == "puton" or a == "input") mas[i+5] = 1;
                if (d == "output") mas[i+6] = 1;
                if (b == "one" or b == "out") mas[i+3] = 1;                
                if (c == "in") mas[i+2] = 1;
            }
        }

        cout<<(mas[n]? "YES":"NO")<<endl;
        test--;
    }

    return 0;
}
