#include<iostream>
#include<map>
using namespace std;
int main() {
    map <int, int> myMap;
    int n, num;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> num;
        myMap[num]++;
    }
    
    int count = 0;

    for (auto x : myMap) {
        if (x.second == 3) {
            count++;
        }
    }

    cout << count;

    return 0;
}
