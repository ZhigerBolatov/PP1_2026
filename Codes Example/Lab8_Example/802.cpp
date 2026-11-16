#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    vector <int> myVector;

    while (cin >> num) {
        myVector.push_back(num);
    }

    int min = myVector[0];
    int max = myVector[0];

    for (int i = 0; i<myVector.size(); i++) {
        if (min > myVector[i])
            min = myVector[i];

        if (max < myVector[i])
            max = myVector[i];
    }

    for (auto& val : myVector) {
        if (min == val)
            val = max;
    }
    
    for (auto& val : myVector) {
        cout << val << " ";
    }

    return 0;
}