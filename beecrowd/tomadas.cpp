#include <iostream>

using namespace std;

int main () {
    int t;
    int soma = 0;
    for (int i = 0; i < 4; i++){
        cin >> t;
        soma += t;
    }
    int total = soma - 3;
    cout << total << "\n";
    return 0;
}