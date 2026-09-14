#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
    int t;
    cin >> t;
    while(t--) {
        int n, s, t;
        cin >> n >> s >> t;
        int duplicado = (s+t) - n;
        int max_s = s - duplicado;
        int maximo_t = t - duplicado;
        int maior = max(max_s, maximo_t) + 1;
        cout << maior << "\n";
    }
    return 0;
}