#include <iostream>

using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        int c;
        int resto = 0;
        cin >> c;
        if  (c % 3 == 1) {
            resto = 2;
        }
        else if (c % 3 == 2) {
            resto = 1;
        }
        else {
            resto = 0;
        }
        cout << resto << "\n";
    }

    return 0;
}