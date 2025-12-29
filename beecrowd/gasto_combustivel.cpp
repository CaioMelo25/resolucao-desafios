#include <iostream> 
#include <iomanip> 

using namespace std;

int main () {
    double t, v, l;
    cin >> t >> v;

    l = (t * v) / 12.0;

    cout << fixed << setprecision (3) << l << "\n";
}