#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    double n, l, v1, v2;
    cin >> n >> l >> v1 >> v2;
    double tempo = (l - n) / (v1 + v2);

    cout << fixed << setprecision(20) << tempo << "\n";
    return 0;
}