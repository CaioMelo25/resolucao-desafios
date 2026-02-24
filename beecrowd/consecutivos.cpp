#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    
    if (!(cin >> n)) return 0;

    if (n == 0) {
        cout << 0 << "\n";
        return 0;
    }

    vector<long long> numeros(n);
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    int contador_atual = 1;
    int maior_sequencia = 1; 

    for (int i = 1; i < n; i++) {
        
        if (numeros[i] == numeros[i - 1]) {
            contador_atual++;
        } 
        else {
            maior_sequencia = max(maior_sequencia, contador_atual);
            contador_atual = 1;
        }
    }

    maior_sequencia = max(maior_sequencia, contador_atual);
    cout << maior_sequencia << "\n";

    return 0;
}