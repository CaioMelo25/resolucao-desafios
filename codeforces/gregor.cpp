#include <iostream>
#include <string>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string enemy_row;
        string gregor_row;
        cin >> enemy_row;
        cin >> gregor_row;

        int paws = 0;

        for (int j = 0; j < n; j++) {
            if (gregor_row[j] == '1') {

                if (enemy_row[j] == '0') {
                    paws++;
                }
                else if (j > 0 && enemy_row[j - 1] == '1') {
                    paws++;
                    enemy_row[j - 1] = 'X';
                }
                else if (j < n - 1 && enemy_row[j + 1] == '1') {
                    paws++;
                    enemy_row[j + 1] = 'X';
                }
            }
        }
        cout << paws << '\n';
    }
    
    return 0;
}