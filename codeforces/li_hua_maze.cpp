#include <iostream>
#include <algorithm>

using namespace std;

int contar_vizinhos(int x, int y, int n, int m) {
    int vizinhos = 4;
    
    if (x == 1) vizinhos--;    
    if (x == n) vizinhos--;    
    if (y == 1) vizinhos--;   
    if (y == m) vizinhos--;
    
    return vizinhos;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int obstaculos_inicio = contar_vizinhos(x1, y1, n, m);
        int obstaculos_fim = contar_vizinhos(x2, y2, n, m);
        
        cout << min(obstaculos_inicio, obstaculos_fim) << "\n";
    }
    return 0;
}