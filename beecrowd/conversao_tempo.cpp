#include <iostream> 

using namespace std;

int main () {
    int s, horas, minutos, segundos, resto;
    cin >> s;
    horas = s / 3600;
    resto = s % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    cout << horas << ":" << minutos << ":"<< segundos << "\n";

    return 0;

}