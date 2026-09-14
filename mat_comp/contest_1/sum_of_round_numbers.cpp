#include <iostream>
#include <string>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--){
        string n;
        cin >> n;
        int tamanho = n.length();
        int contador = 0;
        for (auto s : n) {
            if (s != '0') {
                contador++;
            }
        }
        cout << contador << "\n";
        for(int i = 0; i < tamanho; i++) {
            if (n[i] != '0'){
                int zeros = tamanho - 1 - i;
                cout << n[i] << string(zeros, '0') << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}