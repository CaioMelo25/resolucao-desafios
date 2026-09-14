#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    int soma_total = 0;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        soma_total += nums[i]; 
    }
    int meio = soma_total / 2;
    int soma_atual = 0;
    
    for (int i = 0; i < n; i++) {
        soma_atual += nums[i]; 
        if (soma_atual == meio) {
            cout << i + 1 << "\n";
            break; 
        }
    }
    
    return 0;
}