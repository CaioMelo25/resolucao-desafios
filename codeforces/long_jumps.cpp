#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<long long> points(n);
        for (int i = n - 1; i >= 0; i--) {
            int next = i + a[i];
            points[i] = a[i];

            if(next < n) {
                points[i] += points[next];
            }
        }
        long long max_points = *max_element(points.begin(), points.end());
        cout << max_points << "\n";
    }
    
    return 0;
}