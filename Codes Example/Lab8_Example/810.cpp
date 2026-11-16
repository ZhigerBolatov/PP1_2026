#include <iostream>
#include <set>
using namespace std;

int main() {
    int num;
    set<int> myset;

    while (cin>>num)
        myset.insert(num);    

    cout << myset.size();
    return 0;
}