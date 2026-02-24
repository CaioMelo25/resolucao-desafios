#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>  

using namespace std;

int main () {
    vector<double> notas (5);
    double soma = 0.0;
    for (int i = 0; i < 5; i++){
        cin >> notas[i];
    }
    sort(notas.begin(), notas.end());

    for (int i = 1; i < 4; i++){
        soma += notas[i];
    }
    cout << fixed << setprecision(1) << soma << "\n";

    return 0;
}