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

    auto it = myMap.begin();
    it++;
    cout << it->second;

    return 0;
}