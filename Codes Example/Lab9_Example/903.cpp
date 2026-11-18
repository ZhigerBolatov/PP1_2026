#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp (pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}

int main() {
    vector <pair<int, int>> myVector;
    int n,num1,num2;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin>>num1>>num2;
        myVector.push_back({num1 + num2, i+1});
    }
    sort(myVector.begin(), myVector.end(), cmp);

    for (int i=0; i<n; i++) {
        auto num = myVector.begin() + i;
        cout << num->second << " ";
        // vector<pair<int,int>>::iterator num = myVector.begin() + i;
        // cout << (*num).second << " ";
    }

    for (auto x : myVector)
        cout << x.second << " ";
        
    return 0;
}