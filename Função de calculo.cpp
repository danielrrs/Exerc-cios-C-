#include<iostream>

int calculo(int codigo, int numero1, int numero2) {
    int resultado;

    if (codigo == 1) {
        resultado = numero1 + numero2;
    }
    else if (codigo == 2) {
        resultado = numero1 - numero2;
    }
    else if (codigo == 3) {
        resultado = numero1 * numero2;
    }
    else if (codigo == 4) {
        // Adicione verificação para evitar divisão por zero
        if (numero2 != 0) {
            resultado = numero1 / numero2;
        } else {
            std::cout << "Erro, divisão por zero." << std::endl;
            return 0;  // Retorna 0 ou outro valor de erro, dependendo do que faz sentido em seu programa
        }
    }
    else {
        std::cout << "Erro, código inválido." << std::endl;
        return 0;  // Retorna 0 ou outro valor de erro, dependendo do que faz sentido em seu programa
    }

    return resultado;
}

int main() {
    int codigo, numero1, numero2;

    std::cout << "\nDigite um código: ";
    std::cout << "\n(1) Soma | (2) Subtração | (3) Multiplicação | (4) Divisão\n";
    std::cin >> codigo;

    std::cout << "Digite o primeiro número: ";
    std::cin >> numero1;

    std::cout << "Digite o segundo número: ";
    std::cin >> numero2;

    int resultado = calculo(codigo, numero1, numero2);

    if (resultado != 0) {
        std::cout << "Resultado: " << resultado << std::endl;
    }

    return 0;
}
		
		

