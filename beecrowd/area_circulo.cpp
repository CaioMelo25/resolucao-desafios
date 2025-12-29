#include <iostream> 
#include <cmath>    
#include <iomanip>  

using namespace std;

int main() {
    double r, area;
    double n = 3.14159;

    cin >> r;

    area = n * pow(r, 2.0);
    cout << "A=" << fixed << setprecision(4) << area << "\n";

    return 0;
}