#include <iostream>
#include <vector>

using namespace std;


int main (){
    int n, t;
    cin >> n >> t;
    vector<vector<int>> adj(n + 1);
    vector<int> suspeitos;
    int count = 0;

    for (int i = 1; i <= t; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }

    for (int i = 1; i <= n + 1; i++) {
        if (adj[i].empty()){
            count += 1;
            suspeitos.push_back(i);
            
        }
    }
    if (count == 1){
        cout << suspeitos[0] << "\n";
    }
    else {
        cout << -1 << "\n";
    }
    
    return 0;
}