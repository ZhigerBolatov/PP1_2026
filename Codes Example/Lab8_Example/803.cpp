#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    vector <int> myVector, myVector2;

    while (cin >> num && num != 0) {
        myVector.push_back(num);
    }

    for (int i=0; i<(myVector.size() + 1) / 2; i++) {
        if (i == int(myVector.size() / 2) )
            myVector2.push_back(myVector[i]);
        else
            myVector2.push_back(myVector[i] + myVector[myVector.size() - i - 1]);
    }

    for (auto val : myVector2)
        cout << val << " ";

    return 0;
}