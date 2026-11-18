#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    string s; cin >> s;
    stack<char> st;
    for (auto c : s) {
        // If current and top elements are both '1',
        // remove the previous '1'
        if (!st.empty() && st.top() == '1' && c == '1') {
            st.pop();
        }
        else {
            st.push(c);
        }
    }

    // Build the final string
    string ans;
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    // Stack gives elements in reverse order
    reverse(ans.begin(), ans.end());
    cout << ans;
    return 0;
}