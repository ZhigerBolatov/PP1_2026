#include <iostream>
#include <set>
using namespace std;

int main() {
    int num;
    // 7 6 4 2 1 1
    // 1 2 4 6 7

    set <int> mySet;
    while (cin >> num)
        mySet.insert(num);

    for (auto val : mySet)
        cout << val << " ";

    int count = 0;
    for (auto val : mySet) {
        if (count==2)
            cout << val; // Third element
        count++;
    }

    cout << endl;
    cout << "First: "<< *mySet.begin(); // first element

    cout << endl;
    cout << "Third: " << *next(mySet.begin(), 2); // third element



    return 0;
}