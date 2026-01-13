#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<long long> fibonacci(61);
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (int i = 2; i < 61; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    int t;
    cin >> t;
    while(t--) {
        int N;
        cin >> N;
        cout << "Fib("<< N << ") = " << fibonacci[N] << "\n";
    }

    return 0;
}