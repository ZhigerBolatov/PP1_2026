
#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main() {
    map<string, int> myMap;
    int d, n, students;
    string city;
    int total = 0;
    cin >> d; // Number of days

    // Process each day
    for (int i = 0; i < d; i++) {
        cin >> n; // Number of places for this day

        // Read city names and number of students
        for (int j = 0; j < n; j++) {
            cin >> city >> students;
            myMap[city] += students;
            total += students;
        }
    }

    // Calculate and print percentages
    for (auto place : myMap) {
        double percentage = (double)place.second / total * 100;
        cout << place.first << " " << fixed << setprecision(6) << percentage << endl;
    }

    return 0;
}
