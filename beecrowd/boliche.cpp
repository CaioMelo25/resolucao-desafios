#include<iostream>

using namespace std;

int main () {
    int a, b, c, d;
    cin >> d >> a >> b >> c;

    if (d <= a && d <= b && d <= c) {
        cout << "S" << "\n";
    }
    else {
        cout << "N" << "\n";
    }

    return 0;
}