#include <iostream>
using namespace std;

int main() {
    int n, index = 0;
    cin >> n;

    while (n > 0) {
        if (n & 1) {   // search bit
            cout << index;
            break;
        }

        n >>= 1;  // right shift
        index++;
    }
    // 000110 = 1
    // 010100 = 2
    return 0;
}