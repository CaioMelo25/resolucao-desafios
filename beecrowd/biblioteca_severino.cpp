#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    while (cin >> t) {
        vector<string> livros(t);

        for (int i = 0; i < t; i++) {
            cin >> livros[i];
        }
        sort(livros.begin(), livros.end());

        for (int i = 0; i < t; i++) {
            cout << livros[i] << "\n";
        }
    }

    return 0;
}