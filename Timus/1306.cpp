#include <queue>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    int n;
    unsigned int a;
    std::vector <unsigned int> d;
    std::make_heap(d.begin(), d.end());
    //cin>>n;
    scanf("%u", &n);
    if(n>2*100000){
        for (int i = 0; i < 125000+1; i++) {
            scanf("%u", &a);
            d.push_back(a);
            std::push_heap(d.begin(), d.end());
        }
        //std::sort_heap(d.begin(), d.end() );
        for (int i = 125000+1; i < n; i++) {
            scanf("%u", &a);
            d.push_back(a);
            std::push_heap(d.begin(), d.end());
            std::pop_heap(d.begin(), d.end());
            d.pop_back();
        }
        if (n % 2 == 1) {
            printf("%u.0", d.front());

        } else {
            a = d.front();
            std::pop_heap(d.begin(), d.end());
            d.pop_back();
            n = d.front();
            d.clear();
            if ((a + n) % 2 == 0) printf("%u.0", (a / 2 + n / 2 + a % 2));


            else printf("%u.5", (a / 2 + n / 2));

        }

    }
    else {
        for (int i = 0; i < n / 2+1; i++) {
            scanf("%u", &a);
            d.push_back(a);
            std::push_heap(d.begin(), d.end());
        }
        for (int i = n / 2+1; i < n; i++) {
            scanf("%u", &a);
            d.push_back(a);
            std::push_heap(d.begin(), d.end());
            std::pop_heap(d.begin(), d.end());
            d.pop_back();
        }
        a=0;
        if (n % 2 == 1) {
            printf("%u.0", d.front());
        } else {
            a = d.front();
            std::pop_heap(d.begin(), d.end());
            d.pop_back();
            n = d.front();
            d.clear();
            if ((a + n) % 2 == 0) {
                
                printf("%u.0", (a / 2 + n / 2 + a % 2));

            } else {
                printf("%u.5", (a / 2 + n / 2));
                
            }
        }
    }
    return 0;

}
