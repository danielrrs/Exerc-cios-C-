#include <iostream>
#include <string>

bool ehPalindromo(const std::string& str) {
    std::string strFormatada;

    // Remove espaços e converte para letras minúsculas
    for (size_t i = 0; i < str.length(); ++i) {
        if (!std::isspace(str[i])) {
            strFormatada += std::tolower(str[i]);
        }
    }

    // Verifica se a string original é igual à string invertida
    std::string strInvertida;
    for (int i = static_cast<int>(strFormatada.length()) - 1; i >= 0; --i) {
        strInvertida += strFormatada[i];
    }

    return strFormatada == strInvertida;
}

int main() {
    std::string entrada;

    // Solicita uma string ao usuário
    std::cout << "Digite uma string: ";
    std::getline(std::cin, entrada);

    // Verifica se a string é um palíndromo
    if (ehPalindromo(entrada)) {
        std::cout << "A string é um palíndromo." << std::endl;
    } else {
        std::cout << "A string não é um palíndromo." << std::endl;
    }

    return 0;
}

