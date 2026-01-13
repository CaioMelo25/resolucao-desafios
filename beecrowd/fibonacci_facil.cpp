#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 0) return 0;

    vector<int> fibonacci(N);
    fibonacci[0] = 0;

    if (N > 1) {
        fibonacci[1] = 1;
        for (int i = 2; i < N; i++) {
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        }
    }

    for (int i = 0; i < N; i++) {
        if (i == N - 1) {
            cout << fibonacci[i];
        } else {
            cout << fibonacci[i] << " ";
        }
    }
    cout << "\n";
    
    return 0;
}