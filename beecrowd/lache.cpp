#include <iostream>
#include <iomanip>  

using namespace std;

int main () {
    int cod, qtd;
    double preco;
    cin >> cod >> qtd;

    switch(cod) {
        case 1:
            preco = 4.00;
            break;
        case 2:
            preco = 4.50;
            break;
        case 3:
            preco = 5.00;
            break;
        case 4:
            preco = 2.00;
            break;
        case 5:
            preco = 1.50;
    }
    
    double valor = preco * qtd;
    cout << "Total: R$ " << fixed << setprecision(2) << valor << "\n";

    return 0;
}