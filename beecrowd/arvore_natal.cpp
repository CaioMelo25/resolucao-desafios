#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        for (int i = 1; i <= n; i += 2) {
            int espacos = (n - i) / 2;
            cout << string(espacos, ' ') << string(i, '*') << "\n";
        }
        int espacos_tronco1 = (n - 1) / 2;
        cout << string(espacos_tronco1, ' ') << "*" << "\n";
        int espacos_tronco2 = (n - 3) / 2;
        cout << string(espacos_tronco2, ' ') << "***" << "\n";
        cout << "\n";
    }
    return 0;
}