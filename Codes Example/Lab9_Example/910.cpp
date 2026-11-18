
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

bool cmp (pair<string, int> a, pair<string, int> b) {
    if (a.second != b.second)
        return a.second > b.second;

    return a.first > b.first;
}

int main() {
    map<string, int> myMap;
    int n, points;
    string name;
    int total = 0;
    cin >> n;
    // Read students and calculate their total points
    for (int i = 0; i < n; i++) {
        cin >> name >> points;
        myMap[name] += points;
        total += points;
    }

    // Transfer map data into vector
    vector<pair<string, int>> myStudents;
    for (auto student : myMap) {
        myStudents.push_back({student.first, student.second});
    }

    // Sort by points descending, then by name descending
    sort(myStudents.begin(), myStudents.end(), cmp);

    // Calculate and print percentages
    for (auto student : myStudents) {
        double percentage = (double)student.second / total * 100;
        // cout << student.first << " " << fixed << setprecision(6) << percentage << "%" << endl;
        cout << student.first << " ";
        printf("%.6f%%", percentage);
        cout << endl;
    }

    return 0;
}
