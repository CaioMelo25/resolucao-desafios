#include <iostream>
#include <string>

using namespace std;

int main () {
    int t;
    cin >> t;
    int contador = 1;
    while (t--) {
        string sheldon, raj;
        cin >> sheldon >> raj;
        cout << "Caso #" << contador << ": ";

        if (sheldon == raj) {
            cout << "De novo!" << "\n";
        }
        else if (sheldon == "tesoura" && (raj == "papel" || raj == "lagarto")){
            cout << "Bazinga!" << "\n";
        }
        else if (sheldon == "papel" && (raj == "pedra" || raj == "Spock")) {
            cout << "Bazinga!" << "\n";
        }
        else if (sheldon == "pedra" && (raj == "lagarto" || raj == "tesoura")){
            cout << "Bazinga!" << "\n";
        }
        else if (sheldon == "lagarto" && (raj == "Spock" || raj == "papel")) {
            cout << "Bazinga!" << "\n";
        }
        else if (sheldon == "Spock" && (raj == "tesoura" || raj == "pedra")) {
            cout << "Bazinga!" << "\n";
        }
        else {
            cout << "Raj trapaceou!" << "\n";
        }
        contador++;
    }
    return 0;
}