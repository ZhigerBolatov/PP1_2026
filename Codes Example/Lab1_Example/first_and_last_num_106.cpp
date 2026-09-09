#include <iostream>
using namespace std;
main () {
    int a;
    cin >> a;
    int first_number;
    first_number = a / 100;  // Note that value integer

    int last_number;
    last_number = a % 10;

    cout << first_number << " " << last_number << endl;
    return 0;
}