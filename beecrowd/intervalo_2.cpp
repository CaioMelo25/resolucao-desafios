#include <iostream>
#include <vector>

using namespace std;

int main () {
    int n;
    int in = 0;
    int out = 0;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    for (auto num : numbers) {
        if (num >= 10 && num <= 20) {
            in++;
        }
        else {
            out++;
        }
    }
    cout << in << " in" << "\n";
    cout << out << " out" << "\n";

    return 0;

}