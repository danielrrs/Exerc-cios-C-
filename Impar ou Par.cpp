#include <iostream>

int main() {
    int numero;

    std::cout << "Digite um numero:\n";
    std::cin >> numero;

    // Se o resto da divisão por 2 for zero, o número é par; caso contrário, é ímpar.
    std::cout << "O numero e " << ((numero % 2 == 0) ? "par" : "impar") << std::endl;

    return 0;
}
