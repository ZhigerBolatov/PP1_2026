#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;

    for (auto c : s) {
        if (c == '(') {
            st.push(c);
        }
        else {
            if (st.empty()) {
                cout << "NO";
                return 0;
            }

            st.pop();
        }
    }

    if (st.empty())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
