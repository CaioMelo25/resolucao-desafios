#include <iostream>
#include <string>

using namespace std;

int main () {
    int t;
    cin >> t;
    
    while (t--) {
      int n;
      cin >> n;
      string r, b;
      cin >> r >> b;

      int contadorR = 0;
      int contadorB = 0;

      for (int i = 0; i < n; i++) {
        if (r[i] > b[i]){
            contadorR++;
        }
        else if (b[i] > r[i]) {
            contadorB++;
        }
      }

      if (contadorB > contadorR) {
        cout << "BLUE\n";
      }
      else if (contadorR > contadorB) {
        cout << "RED\n";
      }
      else {
        cout << "EQUAL\n";
      }
    }
    return 0;
}