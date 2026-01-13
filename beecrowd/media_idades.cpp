#include <iostream>
#include <iomanip>  

using namespace std;

int main () {
    int n;
    double valor = 0.0;
    double contador = 0.0;
    while (true) {
        cin >> n;
        if (n < 0) {
            break;
        }
        contador ++;
        valor = valor + n;
    }

    double media = valor / contador;
    cout << fixed << setprecision(2) << media << "\n";

    return 0;
}