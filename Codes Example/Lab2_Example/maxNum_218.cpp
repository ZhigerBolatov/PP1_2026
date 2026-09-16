# include <iostream>
using namespace std;
int main() {
    int a, n, temp = 0;
    cin>>n;

    for (int i = 0; i<n ; i++) {
        cin >> a;
        if (a > temp) {
            temp = a;
        }
    }
    cout << temp;
    return 0;
}