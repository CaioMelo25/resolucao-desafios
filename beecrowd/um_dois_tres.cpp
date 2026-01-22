#include <iostream>
#include <string>

using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        bool one = false;
        if (s.length() == 5) {
            cout << 3 << "\n";
        }
        else {
            if (s[0] == 'o' && (s[1] == 'n' || s[2] == 'e')){
                cout << 1 << "\n";
            }
            else if (s[1] == 'n' && (s[0]== 'o' || s[2] == 'e')){
                cout << 1 << "\n";
            }
            else if (s[2] == 'e' && (s[0] == 'o' || s[1] == 'n')){
                cout << 1 << "\n";
            }
            else {
                cout << 2 << "\n";
            }
        }
    }
    return 0;
}