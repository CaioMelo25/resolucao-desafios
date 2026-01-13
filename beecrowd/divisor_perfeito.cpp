#include <iostream>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int soma = 0;
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                soma += i;
            }
        }
        if(soma == n) {
            cout << n << " eh perfeito" << "\n";
        }
        else {
            cout << n << " nao eh perfeito" << "\n";
        }
    }
    return 0;
}