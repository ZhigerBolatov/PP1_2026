# include <iostream>
using namespace std;
int main() {
    int a, n, temp = 0, pos;
    cin>>n;

    for (int i = 0; i < n ; i++) {
        cin >> a;
        if (a > temp) {
            temp = a;
            pos = i + 1;
        }
    }
    cout << pos;
    return 0;
}