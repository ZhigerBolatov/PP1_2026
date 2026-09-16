#include <iostream>
using namespace std;

int main() {
    int n, zeros = 0;
    cin >> n;

    while (n > 0) {
        if ((n & 1) == 0) {  // Bitwise And 0 & 1 = 0
            zeros++;
        }
        n >>= 1;  //right shift
    }

    cout << zeros;

    return 0;
}