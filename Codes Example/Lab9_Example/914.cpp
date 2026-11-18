#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        // Remove all wizards with strength
        // less than or equal to the current wizard
        while (!st.empty() && st.top() <= x) {
            st.pop();
        }

        // Add the current wizard
        st.push(x);

        // Print the number of alive wizards
        cout << st.size() << " ";
    }

    return 0;
}
