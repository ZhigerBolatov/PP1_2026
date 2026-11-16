#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<string> passwords;

    for (int i = 0; i < n; i++) {
        string password;
        cin >> password;

        bool upper = false;
        bool lower = false;
        bool digit = false;

        for (char c : password) {
            if (c >= 'A' && c <= 'Z')
                upper = true;

            if (c >= 'a' && c <= 'z')
                lower = true;

            if (c >= '0' && c <= '9')
                digit = true;
        }

        if (upper && lower && digit) {
            passwords.insert(password);
        }
    }

    cout << passwords.size() << endl;

    for (auto password : passwords) {
        cout << password << endl;
    }

    return 0;
}