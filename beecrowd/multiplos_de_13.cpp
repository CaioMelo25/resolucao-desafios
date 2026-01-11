#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int x, y;
    cin >> x >> y;

    int soma = 0;
    int menor = min(x, y);
    int maior = max(x, y);

    for (int i = menor; i <= maior; i++) {
        if (i % 13 != 0) {
            soma += i;
        }
    }
    cout << soma << "\n";

    return 0;
}