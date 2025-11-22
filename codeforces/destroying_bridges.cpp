#include <iostream>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--){
        int n, k, custo;
        cin >> n >> k;
        for (int s = 1; s <= n; s++) {
            custo = s * (n - s);
            if( k >= custo) {
                cout << s << "\n";
                break;
            }
        }
    }
    return 0;
}