#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    set<int> sums;

    for (int i = 0; i < n - 1; i++) {
        int sum = v[i] + v[i + 1];
        sums.insert(sum);
    }

    cout << sums.size();

    return 0;
}