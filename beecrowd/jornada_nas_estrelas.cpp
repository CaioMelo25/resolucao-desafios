#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> estrelas(N);
    long long total_carneiros = 0;

    for (int i = 0; i < N; i++) {
        cin >> estrelas[i];
        total_carneiros += estrelas[i];
    }

    int i = 0;
    int max_atacada = -1;

    while (i >= 0 && i < N) {
        if (i > max_atacada) {
            max_atacada = i;
        }

        int paridade = estrelas[i] % 2;
        int movimento;

        if (estrelas[i] > 0) {
            estrelas[i]--;
            total_carneiros--;
        }

        if (paridade == 1) {
            movimento = 1;
        } else {
            movimento = -1;
        }

        i += movimento;
    }

    cout << (max_atacada + 1) << " " << total_carneiros << "\n";

    return 0;
}