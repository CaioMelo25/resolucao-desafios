#include <iostream>

using namespace std;

int main ()
{
    int t;
    cin >> t;
    while(t--){
        int n, x;
        int count = 1;
        cin >> n >> x;
        n -= 2;
        if (n < 0) {
            cout << count << "\n";
        }
        else {
            while(n > 0){
                n -= x;
                count++;
            }
            cout << count << "\n";
        }
    }
}