#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double salario, imposto;

    cin >> salario;

    if (salario <= 2000.0) {
        cout << "Isento" << "\n";
    }
    else {
        if (salario <= 3000.0) {
            imposto = (salario - 2000.0) * 0.08;
        }
        else if (salario <= 4500.0) {
            imposto = 80.0 + (salario - 3000.0) * 0.18;
        }
        else {
            imposto = 80.0 + 270.0 + (salario - 4500.0) * 0.28;
        }

        cout << fixed << setprecision(2);
        cout << "R$ " << imposto << "\n";
    }

    return 0;
}