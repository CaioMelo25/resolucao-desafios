#include <iostream>
#include <string>

using namespace std;

int main () {
    int t;
    cin >> t;
    
    while (t--) {
        string nome1, escolha1, nome2, escolha2;        
        long long n1, n2;
        
        cin >> nome1 >> escolha1 >> nome2 >> escolha2;
        cin >> n1 >> n2;
        
        long long soma = n1 + n2;
        string resultado_jogo;
        if (soma % 2 == 0) {
            resultado_jogo = "PAR";
        } else {
            resultado_jogo = "IMPAR";
        }
        if (escolha1 == resultado_jogo) {
            cout << nome1 << "\n";
        } else {
            cout << nome2 << "\n";
        }
    }
    return 0;
}