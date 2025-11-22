#include <iostream>
#include <vector>

using namespace std;

int main () {
    int n, s;
    cin >> n >> s;
    vector<int> stationsFoward(n+1);
    vector<int> stationsBack(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> stationsFoward[i];
    }

    for (int i = 1; i <= n; i++) {
        cin >> stationsBack[i];
    }
    
    if (stationsFoward[1] == 0) {
        cout << "NO" << "\n";
        return 0;
    } 

    if (stationsFoward[s] == 1) {
        cout << "YES" << "\n";
        return 0;
    }

    if (stationsBack[s] == 1) {
        for (int i = s+1; i <= n; i++) {
            if (stationsFoward[i] == 1 and stationsBack[i] == 1) {
                cout << "YES" << "\n";
                return 0;
            }
        }
    }

    cout << "NO" << "\n";

    return 0;
}