#include <iostream>

using namespace std;

int main () 
{
    int t;
    cin >> t;
    while (t--){
        long long n, k;
        cin >> n >> k;
        long long count = 0;
        while (n > 0){
            if(n % k != 0){
                long long temp = n / k;
                long long temp2 = n - (temp * k);
                count += temp2;
                n -= temp2;
            }
            else if (n != 1){
                n /= k;
                count++;
            }
            else {
                n -= 1;
                count++;
            }
            
        }
        cout << count << "\n";
    }
    return 0;
}