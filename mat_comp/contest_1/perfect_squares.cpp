#include <iostream>
#include <cmath> 
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main () {
    int n;
    cin >> n;
    
    vector<int> nums(n); 
    
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] < 0) {
            cout << nums[i] << "\n";
            break;
        } 
        else {
            int raiz = sqrt(nums[i]);
            if (raiz * raiz != nums[i]){
                cout << nums[i] << "\n";
                break;
            }
        }
    }
    return 0;
}