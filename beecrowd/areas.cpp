#include <iostream> 
#include <cmath>    
#include <iomanip>  

using namespace std;

int main () {
    double a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;
    double pi = 3.14159;
    cin >> a >> b >> c;

    triangulo = (a * c) / 2;
    circulo = pi * pow(c, 2.0);
    trapezio = ((a + b) * c) / 2;
    quadrado = pow(b, 2.0);
    retangulo = a * b;

    cout << "TRIANGULO: " << fixed << setprecision(3) << triangulo << "\n";
    cout << "CIRCULO: " << fixed << setprecision(3) << circulo << "\n";
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezio << "\n";
    cout << "QUADRADO: " << fixed << setprecision(3) << quadrado << "\n";
    cout << "RETANGULO: " << fixed << setprecision(3) << retangulo << "\n";
    
}