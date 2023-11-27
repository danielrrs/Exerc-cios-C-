#include <iostream>

int main() {
    float altura = 0;
    float peso = 0;

    // Solicitação de entrada de altura e peso
    std::cout << "Olá! Digite sua altura e seu peso: ";
    std::cin >> altura >> peso;

    // Cálculo do IMC após a entrada dos dados
    float imc = peso / (altura * altura);

    // Exibição do resultado
    std::cout << "\nSeu IMC é: " << imc << std::endl;

    return 0;
}
