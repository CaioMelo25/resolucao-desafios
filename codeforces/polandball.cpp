#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n > 2 && n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main (){
    int n,m;
    bool primo;
    cin >> n;
    for(int j = 1; j <= 1000; j++) {
        m = n * j + 1;
        primo = isPrime(m);
        if (not primo) {
            cout << j << "\n";
            break;
        }
    }
    
    
    
    return 0;
}