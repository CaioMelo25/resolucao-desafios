#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        bool english = false;
        vector<string> langs(N);
        for (int i = 0; i < N; i++) {
            cin >> langs[i];
        }
        for (int i = 0; i < N - 1; i++) {
            if(langs[i] != langs[i + 1]) {
                english = true;
            }
        }
        if (english) {
            cout << "ingles" << "\n";
        }
        else {
            cout << langs[0] << "\n";
        }
    }
    return 0;
}