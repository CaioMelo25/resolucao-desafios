#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main () {
    string T;
    cin >> T;
    reverse(T.begin(), T.end());

    for(auto c : T) {
        cout << c;
    }
    cout << "\n";
    return 0;
}