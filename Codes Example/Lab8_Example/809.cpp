#include <iostream>
#include <set>
using namespace std;

int main() {
    int num, n;
    cin >> n;
    
    set<int> myset;

    for (int i=0; i<n; i++) {
        cin >> num;
        myset.insert(num);
    }
    int count = 0;
    for (auto var : myset)
        if (count == 0) {
            cout << var << endl;
            break;
        }
    cout << *myset.begin();

    return 0;
}