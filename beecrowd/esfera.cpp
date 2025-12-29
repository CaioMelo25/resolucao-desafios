#include <iostream> 
#include <cmath>    
#include <iomanip>  

using namespace std;

int main () {
    double r, vol;
    double pi = 3.14159;
    cin >> r;
    vol = (4/3.0) * pi * pow(r, 3.0);

    cout << "VOLUME = " << fixed << setprecision(3) << vol << "\n";


}