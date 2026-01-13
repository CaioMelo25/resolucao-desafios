#include <iostream>
#include <iomanip>

using namespace std;

double matriz[12][12];

int main () {
    int L;
    char T;
    cin >> L;
    cin >> T;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> matriz[i][j];
        }
    }
    double soma = 0;
    for (int i = 0; i < 12; i++){
        soma += matriz[L][i];
    }
    if (T == 's') {
        cout << fixed << setprecision(1) << soma << "\n";
    }
    else {
        double media = soma / 12;
        cout << fixed << setprecision(1) << media << "\n";
    } 
}