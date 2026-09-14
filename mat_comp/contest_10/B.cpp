#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long menor_perimetro = 2000000000; 

    for (long long L = 1; L * L <= n; L++) {
        long long A = (n + L - 1) / L;
        long long perimetro = 2 * (L + A);
        menor_perimetro = min(menor_perimetro, perimetro);
    }
    cout << menor_perimetro << "\n";

    return 0;
}