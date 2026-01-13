#include <iostream>

using namespace std;

bool ehPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        if (ehPrimo(N)) {
            cout << N << " eh primo\n";
        } else {
            cout << N << " nao eh primo\n";
        }
    }
    return 0;
}