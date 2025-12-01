#include<iostream>

using namespace std;

int main () {
    int n,m;
    cin >> n >> m;
    int x = m;

    while (x--) {
        int l, t;
        cin >> l >> t;
    }

    int max = (n * (n-1)) / 2;
    int faltantes = max - m;
    cout << faltantes << "\n";

    return 0;
}