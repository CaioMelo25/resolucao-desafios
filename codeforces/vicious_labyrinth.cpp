#include <iostream>

using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;

        for ( int i = 1; i <= n; i++) {
            if (i == n) {
                cout << n-1 << ' ';
            }
            else if (i == n-1) {
                cout << n << ' ';
            }
            else {
                if (k % 2 != 0) {
                    cout << n << ' ';
                }
                else {
                    cout << n-1 << ' ';
                }
            }
        }
        cout << "\n";
    }
    
    return 0;
}