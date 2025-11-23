#include <iostream>
#include <vector>

using namespace std;

int main (){
    int n, q;
    cin >> n >> q;
    vector<int> colors(51, 0);

    for (int i = 1; i <= n; i++) {
        int cor;
        cin >> cor;

        if (colors[cor] == 0) {
            colors[cor] = i;
        }
    }

    for (int j = 0; j < q; j++) {
        int t;
        cin >> t;
        int pos_anterior = colors[t];
        cout << pos_anterior << " ";

        colors[t] = 1;

        for (int c = 1; c <= 50; c++) {
            if (colors[c] != 0 && colors[c] < pos_anterior && c != t) {
                colors[c]++;
            }
        }
    }
    cout << "\n";
    
    
    return 0;
}