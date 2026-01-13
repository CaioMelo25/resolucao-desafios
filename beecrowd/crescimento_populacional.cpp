#include <iostream>
#include <math.h>

using namespace std;

int main () {
    int t;
    cin >> t;

    while(t--) {
        int A, B;
        double pA, pB;
        cin >> A >> B >> pA >> pB;
        int contador = 0;

        double ppA = pA / 100;
        double  ppB = pB / 100;

        while (A <= B) {
            contador ++;
            A = A + (A * ppA);
            B = B + (B * ppB);
            if (contador > 100) {
                break;
            }
        }
        if (contador > 100) {
            cout << "Mais de 1 seculo." << "\n";
        }
        else {
            cout << contador << " anos." << "\n";
        }
    }
    return 0;
}