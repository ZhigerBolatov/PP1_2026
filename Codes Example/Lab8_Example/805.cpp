#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num, n, Q, L, R, MaxHight;
    vector <int> myVector;

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> num;
        myVector.push_back(num);
    }

    cin >> Q;
    int result[Q];

    for (int i=0; i<Q; i++) {
        cin >> L >> R;
        int count = 1;
        MaxHight = myVector[L];
        for (int j=L+1; j<=R; j++)
            if (myVector[j] > MaxHight) {
                MaxHight = myVector[j];
                count++;
            }
        result[i] = count;
    }

    for (auto val : result)
        cout << val << endl;
    
        
    return 0;
}