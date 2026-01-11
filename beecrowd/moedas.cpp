#include<iostream>

using namespace std;

int main () {
    double valor;
    cin >> valor;
    int centavos = valor * 100;

    int nota_100 = centavos / 10000;
    int resto = centavos % 10000;
    int nota_50 = resto / 5000;
    resto = resto % 5000;
    int nota_20 = resto / 2000;
    resto = resto % 2000;
    int nota_10 = resto / 1000;
    resto = resto % 1000;
    int nota_5 = resto / 500;
    resto = resto % 500;
    int nota_2 = resto / 200;
    resto = resto % 200;
    int moeda_1 = resto / 100;
    resto = resto % 100;
    int moeda_050 = resto / 50;
    resto = resto % 50;
    int moeda_025 = resto / 25;
    resto = resto % 25;
    int moeda_010 = resto / 10;
    resto = resto % 10;
    int moeda_005 = resto / 5;
    resto = resto % 5;
    int moeda_001 = resto / 1;
    resto = resto % 1;

    cout << "NOTAS:" << "\n";
    cout << nota_100 << " nota(s) de R$ 100.00" << "\n";
    cout << nota_50 << " nota(s) de R$ 50.00" << "\n";
    cout << nota_20 << " nota(s) de R$ 20.00" << "\n";
    cout << nota_10 << " nota(s) de R$ 10.00" << "\n";
    cout << nota_5 << " nota(s) de R$ 5.00" << "\n";
    cout << nota_2 << " nota(s) de R$ 2.00" << "\n";
    cout << "MOEDAS:" << "\n";
    cout << moeda_1 << " moeda(s) de R$ 1.00" << "\n";
    cout << moeda_050 << " moeda(s) de R$ 0.50" << "\n";
    cout << moeda_025 << " moeda(s) de R$ 0.25" << "\n";
    cout << moeda_010 << " moeda(s) de R$ 0.10" << "\n";
    cout << moeda_005 << " moeda(s) de R$ 0.05" << "\n";
    cout << moeda_001 << " moeda(s) de R$ 0.01" << "\n";

    return 0;
}