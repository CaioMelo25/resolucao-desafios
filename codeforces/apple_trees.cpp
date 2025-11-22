#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    int t;
    cin >>t;
    while (t--) {
        int x;
        cin >> x;
        vector<int> arr(x);
        int contador = 1;
        for (int i = 0; i < x; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        for (int j = 0; j < x - 1; j++){
            if (arr[j] < arr[j+1]) {
                contador++;
            }
        }
        cout << contador << "\n";
    }
    
    return 0;
}