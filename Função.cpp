#include<iostream>

bool temRaizEx(int numero, int &resultado) {
    for (int i = 1; i <= numero / 2; ++i) {
        if (i * i == numero) {
            resultado = 1;
            return true;
        }
    }
    resultado = 0;
    return false;
}

int main() {
    int numero;
    int resultado;

    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;

    if (temRaizEx(numero, resultado)) {
        std::cout << "O número tem raiz exata." << std::endl;
    } else {
        std::cout << "O número não tem raiz exata." << std::endl;
    }

    return 0;
}
a
