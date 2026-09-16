#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n ;

    n = n ^ 511; 
    // 511 is 111111111 - only 9-bit number
    // ^ is XOR Bitwise Operator 
    // 1 ^ 1 = 0   
    // 0 ^ 1 = 1
    cout << n << endl;
    return 0;
}