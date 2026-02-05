#include <iostream>
#include <string>

using namespace std;

int main () {
    long long a, b;
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        long long soma = a + b;
        string s = to_string(soma);
        for (char c : s) {
            if (c != '0') {
                cout << c;
            }
        }
        cout << "\n";
    }
    return 0;
}