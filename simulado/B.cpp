#include<iostream>

using namespace std;

const int X {1500};
int Z [X+1][X+1];

int main () {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        Z[v1][v2] = 1;
        Z[v2][v1] = 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++){
            if (Z[i][j] == 0){
                cout << i << " " << j << "\n";
            }
        }
    }
    
    return 0;
}