#include <iostream>

using namespace std;

int main() {
    int n, caso = 1;

    while (cin >> n) {
        int total = 1;
        for (int i = 1; i <= n; i++) {
            total += i;
        }

        cout << "Caso " << caso << ": " << total << " numero";
        if (total > 1) cout << "s";
        cout << "\n";

        cout << "0";
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                cout << " " << i;
            }
        }
        cout << "\n\n";
        caso++;
    }

    return 0;
}