#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    map<string,set<int>> myMap;
    int n, k; cin >> n;
    string name;
    for (int i=0; i<n; i++) {
        cin >> name >> k;
        myMap[name].insert(k);
    }

    for (auto val : myMap) {
        if (myMap[val.first].size() >= 3)
            cout << val.first << " " << "+1" << endl;
        else
            cout << val.first << " " << "NO BONUS" << endl; 
    }
    
    return 0;
}