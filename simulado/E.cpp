#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int solve() {
    int M, N;
    cin >> M >> N;

    vector<string> labirinto(M);
    for (int i = 0; i < M; i++) {
        cin >> labirinto[i];
    }

    int startX, startY;
    cin >> startX >> startY;

    queue<pair<int, int>> q;
    vector<vector<int>> dist(M, vector<int>(N, -1));

    dist[startX][startY] = 0;
    q.push({startX, startY});

    while (!q.empty()) {
        pair<int, int> atual = q.front();
        q.pop();

        int x = atual.first;
        int y = atual.second;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < M && ny >= 0 && ny < N && 
                labirinto[nx][ny] == '.' && dist[nx][ny] == -1) {
                
                dist[nx][ny] = dist[x][y] + 1;

                if (nx == 0 || nx == M - 1 || ny == 0 || ny == N - 1) {
                    return dist[nx][ny];
                }

                q.push({nx, ny});
            }
        }
    }

    return -1;
}

int main() {
    cout << solve() << "\n";
    return 0;
}