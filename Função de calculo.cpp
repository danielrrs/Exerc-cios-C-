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
        // Adicione verifica��o para evitar divis�o por zero
        if (numero2 != 0) {
            resultado = numero1 / numero2;
        } else {
            std::cout << "Erro, divis�o por zero." << std::endl;
            return 0;  // Retorna 0 ou outro valor de erro, dependendo do que faz sentido em seu programa
        }
    }
    else {
        std::cout << "Erro, c�digo inv�lido." << std::endl;
        return 0;  // Retorna 0 ou outro valor de erro, dependendo do que faz sentido em seu programa
    }

    return resultado;
}

int main() {
    int codigo, numero1, numero2;

    std::cout << "\nDigite um c�digo: ";
    std::cout << "\n(1) Soma | (2) Subtra��o | (3) Multiplica��o | (4) Divis�o\n";
    std::cin >> codigo;

    std::cout << "Digite o primeiro n�mero: ";
    std::cin >> numero1;

    std::cout << "Digite o segundo n�mero: ";
    std::cin >> numero2;

    int resultado = calculo(codigo, numero1, numero2);

    if (resultado != 0) {
        std::cout << "Resultado: " << resultado << std::endl;
    }

    return 0;
}
		
		

