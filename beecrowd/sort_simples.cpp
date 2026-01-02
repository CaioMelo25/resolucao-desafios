#include <iostream>

using namespace std;

int main () {
    int a, b, c, menor, mid, maior;
    cin >> a >> b >> c;

    if (a < b && a < c) {
        menor = a;
        if (b < c) {
            mid = b;
            maior = c;
        }
        else {
            mid = c;
            maior = b;
        }
    }

    if (b < a && b < c) {
        menor = b;
        if (a < c) {
            mid = a;
            maior = c;
        }
        else {
            mid = c;
            maior = a;
        }
    }

    if (c < b && c < a) {
        menor = c;
        if (b < a) {
            mid = b;
            maior = a;
        }
        else {
            mid = a;
            maior = b;
        }
    }
    
    cout << menor << "\n";
    cout << mid << "\n";
    cout << maior << "\n";
    cout << "\n";
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";

    return 0;

}