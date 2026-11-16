#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main () {
    vector <int> myNumbers;
    int num, sum = 0;
    string line;

    getline(cin, line);
    stringstream cinString(line);

    while (cinString >> num) {
        myNumbers.push_back(num);
    }

    for (int i=0; i<myNumbers.size(); i++){
        sum = sum + myNumbers[i];
    }
    cout << sum;

    return 0;
}