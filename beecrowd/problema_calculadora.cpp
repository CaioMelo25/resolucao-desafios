#include <iostream>
#include <string>

using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;

        int n1 = stoi(str.substr(2, 2));
        int n2 = stoi(str.substr(5, 3));
        int n3 = stoi(str.substr(11, 2));
        int soma = n1 + n2 + n3;

        cout << soma << "\n";
    }
    return 0;
}