// If you copy and paste my solution I will murder you in your sleep.
#include <bits/stdc++.h>

signed main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    auto fun = [&] (int a, int b){
        while(b){
            a %= b;
            std::swap(a,b);
        }
    };

    int m,a;
    int n,b;

    std::cin>>m>>n;

    a = abs(m);
    b = n;

    if(m == 0) {
        std::cout<<m<<'\n';
        return 0;
    }
    else if(m%n == 0 and m>n) {
        std::cout<<m/n<<'\n';
        return 0;
    }

    fun(a, b);
    std::cout<<m/a<<':'<<n/a<<'\n';
    
    return 0;
}
