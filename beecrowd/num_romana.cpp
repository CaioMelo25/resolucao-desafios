#include <iostream>

using namespace std;

int main () {
   string unidades[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
   string dezenas [] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
   string centenas[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};

   int n;
   cin >> n;

   int centena = n / 100;
   n = n % 100;
   int dezena = n / 10;
   int unidade = n % 10;

   cout << centenas[centena] << dezenas[dezena] << unidades[unidade] << "\n";

   return 0;


}