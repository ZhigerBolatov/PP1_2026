#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    map<int,int> myMap;
    int n,k;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> k;
        myMap[k]++;
    }

    //using iterators
    if (myMap.size()>=2) {
        map<int,int>::iterator second_max_it = prev(myMap.end(),2);
        cout << second_max_it -> second;
        // cout << (*second_max_it).second;  //through pointer, the same result
    }
    else
        cout << (myMap.begin()) -> second;

    // 2nd solution way using loop
    int max1=0, max2=0;
    for (auto val : myMap){
        max2 = max1;
        max1 = val.first;
    }

    cout << endl <<myMap[max2];
        
    return 0;
}