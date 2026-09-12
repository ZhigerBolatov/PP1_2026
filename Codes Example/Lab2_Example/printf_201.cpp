#include <cstdio> // Lib
int main() {
    float x;
    scanf("%f", &x);  // input (cin)
    printf("%.6f \n", x * x * x);  // output (cout)

    // print out two valuess
    int a = 10;
    double b = 3.14;
    scanf("%i %lf", &a, &b); // lf - long float
    printf("%i %.2lf", a, b);
    return 0;
}