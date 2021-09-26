#include <iostream>

using namespace std;

int main()
{
    long N;
    long* b;
    long i;
    long double m;
    cin >> N;
    b = new long[N];
    for (i = 0; i < N; i++) {
        cin >> b[i];
    }
    for (i = 0; i < N; i++) {
        m = sqrt(long double(8.0 * long double(b[i]) - 7.0));
        if (fabs(m - ceil(m)) < 0.00001) {
            if (i != N - 1) {
                cout << "1" << " ";
            }
            else {
                cout << "1";
            }
        }
        else {
            if (i != N - 1) {
                cout << "0" << " ";
            }
            else {
                cout << "0";
            }
        }
    }
    cout << endl;
    return 0;
}
