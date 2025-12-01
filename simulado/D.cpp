#include <iostream>
#include <vector>

using namespace std;

vector<int> parent;

void make_set(int x) {
    parent[x] = x;
}

int find_set(int x) {
    if (x == parent[x]) {
        return x;
    }
    return parent[x] = find_set(parent[x]);
}

void union_set(int x, int y) {
    x = find_set(x);
    y = find_set(y);

    if (x != y) {
        parent[y] = x;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    parent.resize(n + 1);

    for (int i = 1; i <= n; i++) {
        make_set(i);
    }

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        union_set(u, v);
    }

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (parent[i] == i) {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}