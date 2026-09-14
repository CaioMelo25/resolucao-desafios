#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> pile(n);
        for (int i = 0; i < n; i++) {
            cin >> pile[i];
        }

        sort(pile.begin(), pile.end());

        int menor = pile[0];
        long long total_feiticos = 0;

        for (int i = 1; i < n; i++) {
            if (pile[i] < k) {
                total_feiticos += (k - pile[i]) / menor;    
            }
        }

        cout << total_feiticos << "\n";
    }
    return 0;
}
