#include <iostream>
#include <string>

using namespace std;

int main () {
    int n;
    cin >> n;
    if (n % 2 != 0) {
        cout << "contest" << "\n";
    }
    else {
        cout << "home" << "\n";
    }
    return 0;
}