#include <iostream>

using namespace std;

int main () {
    long long n;
    cin >> n;
    if (n % 2 != 0) {
        cout << 0 << "\n";
        return 0;
    }
    long long maximo = ((n / 2)  - 1) / 2;
    cout << maximo << "\n";
    return 0;
}