#include <iostream>
#include <vector>

using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void apagar_fogo (int i, int j, vector<string>& mapa, int N, int M) {
    mapa[i][j] = '#';

    for (int k = 0; k < 4; k++){
        int ni = i + dx[k];
        int nj = j + dy[k];

        if (ni >= 0  && ni < N && nj >= 0 && nj < M && mapa[ni][nj] == 'F'){
            apagar_fogo(ni, nj, mapa, N, M);
        }
    }

}

int main () {
    int N, M;
    cin >> N >> M;
    int contador = 0;
    vector<string> mapa(N);
    for (int i = 0; i < N; i++) {
        cin >> mapa[i];
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++) {
            if (mapa[i][j] == 'F') {
                contador++;
                apagar_fogo(i, j, mapa, N, M);
            }
        }
    }
    cout << contador << "\n";
    return 0;
}