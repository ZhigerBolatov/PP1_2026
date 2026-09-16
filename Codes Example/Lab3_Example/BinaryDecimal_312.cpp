#include <iostream>
using namespace std;
int main() {
    long long n, result = 0, power = 1;
    cin >> n;

    while (n > 0) {
        int bit = n % 10;  // extracts the last digit.
        result += bit * power;  // adds the value of the current bit
        power *= 2;  // moves to the next digit of the binary number
        n /= 10;  // removes the last digit
    }

    cout << result;
    return 0;
}