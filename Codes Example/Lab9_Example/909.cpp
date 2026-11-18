
#include <iostream>
#include <map>
#include <utility>
#include <iomanip>
using namespace std;

int main() {
    // Store GPA sum and number of records for each student
    map<string, pair<int, int>> myMap;
    int n, gpa;
    string name;
    cin >> n;

    // Read student names and GPA records
    for (int i = 0; i < n; i++) {
        cin >> name >> gpa;
        myMap[name].first += gpa;  // Add GPA to the sum
        myMap[name].second++;      // Count GPA records
    }

    // Calculate and print average GPA
    for (auto student : myMap) {
        double average = (double)student.second.first / student.second.second;
        cout << student.first << ": " << fixed << setprecision(3) << average << endl;

        // cout << student.first << ": ";
        // printf("%.3f\n", average);
    }

    return 0;
}
