#include <iostream>
using namespace std;
int main() {
    char letter;
    cin >> letter;
    cout << int(letter) + 1 << endl;
    cout << char (int(letter) + 1);
    return 0;
}