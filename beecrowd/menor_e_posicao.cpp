#include <iostream>
#include <vector>

using namespace std;

int main () {
    int N;
    cin >> N;
    vector<long long> nums(N);
    for (int i = 0; i < N; i++){
        cin >> nums[i];
    }
    long long menor;
    int pos;
    for (int i = 0; i < N; i++) {
        int atual = nums[i];
        if (atual < menor) {
            menor = atual;
            pos = i;
        }
    }
    cout << "Menor valor: " << menor << "\n";
    cout << "Posicao: " << pos << "\n";
    return 0;
}