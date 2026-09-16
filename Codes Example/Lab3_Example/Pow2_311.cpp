#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 0 && (n & (n - 1)) == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

// 2⁰ = 1    → 0001
// 2¹ = 2    → 0010
// 2² = 4    → 0100
// 2³ = 8    → 1000
// 2⁴ = 16   → 10000

// n     = 10000   (16)
// n - 1 = 01111   (15)
//         -----
//         00000

// n     = 01000   (8)
// n - 1 = 00111   (7)
//         -----
//         00000