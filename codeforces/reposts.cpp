#include <iostream>
#include <map>
#include <string>
#include <cctype>

using namespace std;

string toLowerCase(string s) {
    for (char &c : s) {
        c = tolower(c);
    }
    return s;
}

int main () {
    int n;
    cin >> n;
    map<string, int> reposts;
    reposts["polycarp"] = 1;
    int max_chain = 1;
    while (n--) {
        string nome1, s, nome2;
        cin >> nome1 >> s >> nome2;
        nome1 = toLowerCase(nome1);
        nome2 = toLowerCase(nome2);
        reposts[nome1] = reposts[nome2] + 1;

        if (reposts[nome1] > max_chain) {
            max_chain = reposts[nome1];
        }
    }
    cout << max_chain << "\n";

    return 0;
}