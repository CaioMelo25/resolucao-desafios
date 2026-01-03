#include <iostream>
#include <string>

using namespace std;

int main () {
    string text;
    char ponto; 
    int d1, h1, m1, s1;
    int d2, h2, m2, s2;
    
    cin >> text >> d1;
    
    cin >> h1 >> ponto >> m1 >> ponto >> s1;
    
    cin >> text >> d2;
    
    cin >> h2 >> ponto >> m2 >> ponto >> s2;

    int inicio_segundos = (d1 * 86400) + (h1 * 3600) + (m1 * 60) + s1;
    int fim_segundos    = (d2 * 86400) + (h2 * 3600) + (m2 * 60) + s2;

    int total = fim_segundos - inicio_segundos;

    int dias = total / 86400;
    total = total % 86400; 

    int horas = total / 3600;
    total = total % 3600; 

    int minutos = total / 60;
    int segundos = total % 60; 

    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;

    return 0;
}