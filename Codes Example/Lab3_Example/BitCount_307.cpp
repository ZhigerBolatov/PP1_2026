#include <iostream>
using namespace std;
int main(){
    int n, count = 0;
    cin >> n ;

    while (n > 0) {
        count += (n & 1);  // bitwise And
        n = n >> 1;  //right shift
    }
    cout << count << endl;
    return 0;
}