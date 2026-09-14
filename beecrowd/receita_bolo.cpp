#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int f, o, l;
    cin >> f >> o >> l;
    int farinha = f / 2;
    int ovo = o / 3;
    int leite = l / 5;
    int menor = min({farinha, ovo, leite});
    cout << menor << "\n";
}