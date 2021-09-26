#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<1) return 0;
    if (n==1) return 1;
    return fib(n-1)+fib(n-2);
    
}

int main()
{
  long long n;
  
  cin >> n;
  vector <long long> mas;
  mas.push_back(0);
  mas.push_back(1);

  for(long long i = 2;i<=n;i++){
      mas.push_back(mas[i-1]+mas[i-2]);
  }
  
  cout<<2*mas[n];
}
