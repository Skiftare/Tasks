#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<long long> mas;
    long long k,n;
    cin>>n>>k;
    mas.push_back(0);
    mas.push_back(k-1);
    for(int i = 2;i<n+1;i++){
        mas.push_back(mas[i-2]*(k-1)+mas[i-1]*(k-1));
    }
    cout<<mas[n]+mas[n-1]<<endl;
    return 0;
}
