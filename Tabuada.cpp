#include<iostream>

int main() {
    int numero = 0;  // Declare e inicialize as variáveis
    int contador = 0;
    int multiplicador = 1;  // Inicialize o multiplicador com 1

    std::cout << "Digite o numero que você quer a tabuada!" << std::endl;
    std::cin >> numero;

    while (contador < 10) {
        std::cout << numero << " x " << multiplicador << " = " << numero * multiplicador << std::endl;

        contador = contador + 1;
        multiplicador = multiplicador + 1;
    }

    return 0;
}