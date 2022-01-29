#include <bits/stdc++.h>
#define int long long
#define INF 1e9

using namespace std;

signed main()
{
    int n;
    cin>>n;
    //n = 10000;
    vector <int> mas (n);
    vector<int> prefix;
    int a = 0;
    int sum = 0;
    bool flag = false;
    for(int i = 0; i<n; i++)
    {
        cin>>mas[i];
        //mas[i] = 15000;
        sum = sum + mas[i];
        prefix.push_back(sum%n);
        if(prefix[i] == 0 and flag == false)
        {
            flag = true;
            a = i+1;
        }
    }
    if(flag == true)
    {
        cout<<a<<endl;
        for(int i = 0; i<a; i++)
        {
            cout<<mas[i]<<endl;
        }
    }
    else
    {

        for(int i = 0; i<n; i++)
        {
            for(int j = i+1; j<n; j++)
            {
                if(prefix[i] == prefix[j])
                {
                    cout<<j-i<<endl;
                    for(int q = i+1; q<j+1; q++)
                    {
                        cout<<mas[q]<<endl;
                    }
                    flag = true;
                    break;
                }
            }
            if(flag == true){
                break;
            }
        }
    }
    return 0;
}
