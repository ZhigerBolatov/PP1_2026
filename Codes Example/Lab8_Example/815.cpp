#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, num;
    map<int, int> myMap;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        myMap[num]++;
    }
    // 1 2 3 1 2 2
    // map[1] = 0;
    // map[2] = 3;
    // map[3] = 1;

    //cout << myMap.rbegin()->first;

    auto it = myMap.end(); // 1 2 3 
    it--;
    cout << it->first;

    return 0;
}