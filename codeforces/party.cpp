#include <iostream>
#include <vector>


using namespace std;

int dfs (int u, const vector<vector<int>>& adj) {
    int profundidade_max = 0;
    for (int v : adj[u]) {
        int profundidade_filho = dfs(v, adj);

        if (profundidade_filho > profundidade_max) {
            profundidade_max = profundidade_filho;
        }
    }
    return 1 + profundidade_max;
}

int main() {
    int n; 
    cin >>n;
    vector<vector<int>> adj (n + 1);
    vector<int> chefes;
    for (int i = 1; i<=n; i++) {
        int chefe;
        cin >> chefe;

        if (chefe != -1){
            adj[chefe].push_back(i);
        }
        else {
            chefes.push_back(i);
        }
    }

    int ans = 0;
    for (int chefe : chefes) {
        int altura = dfs (chefe, adj);
        if(altura > ans) {
            ans = altura;
        }
    }
    cout << ans << "\n";
    return 0;
}