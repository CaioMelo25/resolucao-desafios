#include <iostream>
#include <iomanip>  

using namespace std;

int main () {
    double a, b, c;
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        double perimetro = a + b + c;
        cout << "Perimetro = " << fixed << setprecision(1) << perimetro << "\n";
    }
    else {
        double area = ((a + b) * c) / 2;
        cout << "Area = " << fixed << setprecision(1) << area << "\n";
    }

    return 0;
}