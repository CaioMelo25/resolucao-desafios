#include <iostream>

using namespace std;

int main () {
    int c;
    cin >> c;
    int soma = 0;
    for (int i = 0; i < c; i++){
        int n;
        cin >> n;
        soma += n - 1;
    }
     cout << soma << "\n";
     return 0;
}