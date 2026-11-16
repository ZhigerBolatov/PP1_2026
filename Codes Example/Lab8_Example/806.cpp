#include <iostream>
#include <map>
using namespace std;

//Program that finds the most frequent element using map
int main() {
    int n, num;
    vector<int> myVector;

    cin >> n;
    while (cin >> num)
        myVector.push_back(num);
    
    int mostFrequentVal = myVector[0];
    int maxCount = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (myVector[i] == myVector[j]) {
                count++;
            }
        }

        if (count > maxCount || (count == maxCount && myVector[i] < mostFrequentVal)) {
            maxCount = count;
            mostFrequentVal = myVector[i];
        }
    }

    cout << mostFrequentVal;
    
    return 0;
}
