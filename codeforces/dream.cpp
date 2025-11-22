#include <iostream>
#include <vector>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        vector<int> gols(4);
        for (int i = 0; i < 4; i++) {
            cin >> gols[i];
        }
        if (gols[0] <= ((gols[1] + 1) * 2 && gols[1] <= (gols[0] + 1) * 2) && gols[2] <= ((gols[3] + 1) * 2 && gols[3] <= (gols[2] + 1) * 2) ) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n"; 
        }
    }  
    
    return 0;
}
