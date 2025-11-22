#include<iostream>
#include<vector>

using namespace std;

int dfs(int i, int j, vector<vector<int>>& a, vector<vector<bool>>& visited, int n, int m) {
    if (i < 0 || i >= n || j < 0 || j >= m) {
        return 0;
    }
    if (a[i][j] == 0 || visited[i][j]) {
        return 0;
    }
    visited[i][j] = true;
    int volume = a[i][j];

    volume += dfs(i - 1, j, a, visited, n, m);
    
    volume += dfs(i + 1, j, a, visited, n, m);
    
    volume += dfs(i, j - 1, a, visited, n, m);
    
    volume += dfs(i, j + 1, a, visited, n, m);

    return volume;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        int volume = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if (a[i][j] > 0 && !visited[i][j]) {
                    int this_lake = dfs(i, j, a, visited, n, m);
                    if (this_lake > volume) {
                        volume = this_lake;
                    }
                }
            }
        }
        cout << volume <<"\n";
    }

    return 0;
}
