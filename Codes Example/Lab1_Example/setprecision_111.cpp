#include <iostream>
#include <iomanip>   // library for setprecision 
using namespace std;
int main () {
    int a,b,c;
    cin >> a >> b >> c;
    cout << setprecision(6) << (a+b+c)/3.0 << endl;
    cout << fixed << (a+b+c)/3.0 << endl;

    return 0;

}