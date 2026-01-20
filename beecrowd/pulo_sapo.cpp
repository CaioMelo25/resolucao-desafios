#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main (){
    int p, n;
    cin >> p >> n;
    bool win = true;
    vector<int> canos(n);
    for (int i = 0; i < n; i++){
        cin >> canos[i];
    }
    for (int i = 0; i < n - 1; i++){
        int atual = canos[i];
        int prox = canos[i + 1];
        if (abs(atual - prox) > p) {
            cout << "GAME OVER" << "\n";
            win = false;
            break;
        }
    }
    if (win){
    cout << "YOU WIN" << "\n";
    }
    return 0;
}