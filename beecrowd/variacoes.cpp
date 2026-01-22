#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        string senha;
        set<char> caracteres = {'a', 'e', 'i', 'o', 's', 'A', 'E', 'I', 'O', 'S'};
        cin >> senha;
        long long combinacoes = 1;
        for (auto c : senha) {
            if (caracteres.count(c)) {
                combinacoes *= 3;
            }
            else {
                combinacoes *= 2;
            }
        }
        cout << combinacoes << "\n";

    }
    return 0;
}