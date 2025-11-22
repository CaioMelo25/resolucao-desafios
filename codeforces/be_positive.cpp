#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        
        int custo = 0;
        int contagem_negativos = 0;

        for (int i = 0; i < n; ++i) {
            int valor;
            std::cin >> valor;
            if (valor == 0) {
                custo++;
            } else if (valor == -1) {
                contagem_negativos++;
            }
        }

        if (contagem_negativos % 2 != 0) {
            custo += 2;
        }

        std::cout << custo << std::endl;
    }
    return 0;
}