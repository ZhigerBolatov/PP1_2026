#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long n, i;
    cin >> n;
    for (i = 0; i <= n*n; i++) {
        if ((i * i) >= n) {
            cout << i;
            break;
        }
    }
    return 0;
}