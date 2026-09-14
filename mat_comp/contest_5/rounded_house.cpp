#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main () {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> portoes(n-1);
    int temp = a;
    for (int i = 1; i <=n; i++){
        portoes[i] = i;
    }
    if (b < 0){
        for(int i = 0; i < abs(b); i++) {
            temp--;
            if(temp == 0){
                temp = n;
                temp--;
            }
        }
    }
    else {
         for(int i = 0; i < abs(b); i++) {
            temp++;
            if(temp == n){
                temp = 1;
                temp++;
            }
        }
    }

    cout << portoes[temp] << "\n";
}