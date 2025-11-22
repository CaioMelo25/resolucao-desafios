#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, t;
    int pos = 1;
    cin >> n >> t;
    vector<int> portals(n-1);
    for (int i = 0; i < n-1; i++) {
        cin >> portals[i];
    }

    while (pos < t) {
        pos += portals[pos-1];
    }
    if (pos == t) {
        cout << "YES" <<"\n";
        return 0;
    }
    else {
        cout << "NO" << "\n";
    }
    
    
    
    
    return 0;
}