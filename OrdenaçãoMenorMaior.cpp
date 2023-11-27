#include <iostream>


int main() {
    int num1, num2, num3;

    std::cout << "Digite três números inteiros: ";
    std::cin >> num1 >> num2 >> num3;

    // Ordenação dos números em ordem crescente
    if (num1 > num2) {
        std::swap(num1, num2);
    }

    if (num2 > num3) {
        std::swap(num2, num3);
    }

    if (num1 > num2) {
        std::swap(num1, num2);
    }

    // Exibição dos números em ordem crescente
    std::cout << "Números em ordem crescente: " << num1 << ", " << num2 << ", " << num3 << std::endl;

    return 0;
}