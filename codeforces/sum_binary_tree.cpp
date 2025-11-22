#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long soma = 0;
        while(n > 0) {
            soma += n;
            n /= 2;
        }
        cout << soma << '\n';
    }
    return 0;
}