#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<int> tops = {1, 3, 5, 10, 25, 50, 100};
    int n;
    cin >> n;
    for (auto num : tops) {
        if (n <= num) {
            cout << "Top " << num << "\n";
            break;
        }
    }
    return 0;
}