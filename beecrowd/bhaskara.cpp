#include <iostream> 
#include <cmath>    
#include <iomanip>  

using namespace std;

int main() {
    double a, b, c, delta, r1, r2;
    cin >> a >> b >> c;

    delta = pow(b, 2.0) - 4 * a * c;
    if (a == 0 || delta < 0) {
        cout << "Impossivel calcular" << "\n";
    } 
    else {
        r1 = (-b + sqrt(delta)) / (2 * a);
        r2 = (-b - sqrt(delta)) / (2 * a);

        cout << "R1 = " << fixed << setprecision(5) << r1 << "\n";
        cout << "R2 = " << fixed << setprecision(5) << r2 << "\n";
    }

    return 0;

}