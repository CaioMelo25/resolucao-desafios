#include<iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

const int INF = 1000000000;

vector<vector<pair<int,int>>> adj;

void dijkstra (int s, vector<int>& d){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    d[s] = 0;
    pq.push({0, s});

    while (!pq.empty()) {
        int v = pq.top().second;
        int d_v = pq.top().first;
        pq.pop();
        if(d_v > d[v])
        continue;

        for(auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;

            if(d[v] + len < d[to]) {
                d[to] = d[v] + len;

                pq.push ({d[to], to});
            }
        }
    }
}

int main () {
    int N, M;
    cin >> N >> M;
    adj.resize(N+2);
    vector<int> dist(N+2, INF);
    dist[0] = 0;

    for (int i = 0; i < M; i++){
        int S, T, B;
        cin >> S >> T >> B;
        adj[S].push_back({T, B});
        adj[T].push_back({S, B});
    }

    dijkstra(0, dist);
    cout << dist[N+1] << "\n";


    return 0;
}