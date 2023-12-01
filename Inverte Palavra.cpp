#include<iostream>
#include<string>

std::string invertePalavra(const std::string& palavra) {
    std::string palavraInvertida;

    for (int i = palavra.size() - 1; i >= 0; --i) {
        palavraInvertida += palavra[i];
    }

    return palavraInvertida;
}

int main() {
    std::string entrada, resultado;

    // Solicita uma palavra ao usuário
    std::cout << "Digite uma palavra desejada: ";
    std::cin >> entrada;

    resultado = invertePalavra(entrada);

    std::cout << "Palavra Invertida: " << resultado << std::endl;

    return 0;
}

