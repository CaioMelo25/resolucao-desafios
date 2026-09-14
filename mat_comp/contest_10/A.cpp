#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int c1 = 0, c2 = 0;
        
        for (int i = 0; i < n; i++) {
            int peso;
            cin >> peso;
            if (peso == 1) {
                c1++;
            } else {
                c2++;
            }
        }
        
        int soma_total = c1 + (2 * c2);
        
        if (soma_total % 2 != 0) {
            cout << "NO\n";
        } 
        else if (c1 == 0 && c2 % 2 != 0) {
            cout << "NO\n";
        } 
        else {
            cout << "YES\n";
        }
    }
    
    return 0;
}