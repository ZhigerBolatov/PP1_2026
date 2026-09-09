#include <iostream>
using namespace std;

int main() {
    char c;
    int number;
    cin >> c >> number;

    int x = int(c) + number;
    cout << char(x);

    return 0;
}


    // while (x > 'z') {
    //     x -= 26;
    // }