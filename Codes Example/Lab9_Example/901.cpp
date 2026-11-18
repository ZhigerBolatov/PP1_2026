#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool dec_order_cmp (int a, int b) {
    return a > b;
}

int main() {
    vector <int> myVector;
    int n,num;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin>>num;
        myVector.push_back(num);
    }
    // sort(myVector.begin(), myVector.end(),dec_order_cmp);
    sort(myVector.begin(), myVector.end(), [](int a, int b) {return a<b;});

    while (!myVector.empty())
    {
        cout << myVector.back() << " ";
        myVector.pop_back();
    }
    

        
    return 0;
}