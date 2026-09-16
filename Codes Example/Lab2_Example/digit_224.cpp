#include <iostream>
using namespace std;
int main(){
    long long n, numberDigit = 0;
    cin >> n;

    do {
        numberDigit++;
        n = n / 10;
    } while ( n > 0 );

    cout << numberDigit;
    return 0;
}