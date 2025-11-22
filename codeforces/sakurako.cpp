#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        string s;
        cin >> s;

        vector<int> ans(n);
        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                vector<int> cycle;
                int curr = i;
                while (!visited[curr]) {
                    visited[curr] = true;
                    cycle.push_back(curr);
                    curr = p[curr] - 1;
                }

                int count = 0;
                for (int index : cycle) {
                    if (s[index] == '0') {
                        count++;
                    }
                }

                for (int index : cycle) {
                    ans[index] = count;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}