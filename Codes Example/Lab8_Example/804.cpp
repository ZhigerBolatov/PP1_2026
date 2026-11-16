#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num, n;
    vector <int> myVector;

    cin >> n;
    while (cin >> num)
        myVector.push_back(num);
    
    sort (myVector.begin(), myVector.end());

    for (int i=0; i<=n; i++)
        if (myVector[i] != i) {
            cout << i;
            break;
        }

    return 0;
}