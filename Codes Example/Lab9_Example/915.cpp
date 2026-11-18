#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    stack<int> st;
    vector<int> ans;

    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;

        if (x > 0) {
            // Receive a new box
            st.push(x);
        }
        else {
            // Sell the box on top of the stack
            ans.push_back(st.top());
            st.pop();
        }
    }

    // If no boxes were sold
    if (ans.empty()) {
        cout << -1;
    }
    else {
        for (auto val : ans) {
            cout << val << " ";
        }
    }

    return 0;
}
