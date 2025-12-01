#include <iostream>
#include <vector>

using namespace std;

void dfs (int u, int p, const vector<vector<int>>& adj, vector <long long>& leafs) {
    leafs[u] = 0;
    bool isLeaf = true;

    for (int v : adj[u]) {
        if (v != p) {
            isLeaf = false;

            dfs (v, u, adj, leafs);
            leafs[u] += leafs[v];
        }
    }
    if (isLeaf) {
        leafs[u] = 1;
    }
}


int main () {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<vector<int>> adj(n+1);

        for (int i = 0; i < n-1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<long long> leafs(n + 1);
        dfs(1, -1, adj, leafs);

        int q;
        cin >> q;
        while (q--) {
            int x, y;
            cin >> x >> y;
            long long ans = leafs[x] * leafs[y];
            cout << ans << "\n";
        }
    }
    
    return 0;
}