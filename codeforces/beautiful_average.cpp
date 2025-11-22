#include <iostream>
#include <vector>

using namespace std;
int average (vector<int>& arr, int x) {
    int maior = 0;
    for (int i = 0; i < x; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
        return maior;
}

int main () {
    int t;
    cin >> t;
    

    while (t--) {
        int x;
        cin >> x;
        vector<int> arr(x);
        for (int i = 0; i < x; i++) {
            cin >> arr[i];
        }
        int resultado = average(arr, x);
        cout << resultado << "\n";
    }
    
    
    return 0;
}