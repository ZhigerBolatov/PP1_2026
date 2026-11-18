#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool dec_order_cmp (int a, int b) {
    if (a%2==0 && b%2!=0)
        return true;
    else if (a%2!=0 && b%2==0)
        return false;
    else if (a%2==0 && b%2==0)
        return a>b;
    else return a < b;
}

int main() {
    vector <int> myVector;
    int n,num;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin>>num;
        myVector.push_back(num);
    }
    sort(myVector.begin(), myVector.end(),dec_order_cmp);

    for (int i=0; i<n; i++) {
        cout << myVector[i]<<" ";
    }
        
    return 0;
}