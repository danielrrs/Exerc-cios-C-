#include <iostream>
#include <string>

bool ehPalindromo(const std::string& str) {
    std::string strFormatada;

    // Remove espa�os e converte para letras min�sculas
    for (size_t i = 0; i < str.length(); ++i) {
        if (!std::isspace(str[i])) {
            strFormatada += std::tolower(str[i]);
        }
    }

    // Verifica se a string original � igual � string invertida
    std::string strInvertida;
    for (int i = static_cast<int>(strFormatada.length()) - 1; i >= 0; --i) {
        strInvertida += strFormatada[i];
    }

    return strFormatada == strInvertida;
}

int main() {
    std::string entrada;

    // Solicita uma string ao usu�rio
    std::cout << "Digite uma string: ";
    std::getline(std::cin, entrada);

    // Verifica se a string � um pal�ndromo
    if (ehPalindromo(entrada)) {
        std::cout << "A string � um pal�ndromo." << std::endl;
    } else {
        std::cout << "A string n�o � um pal�ndromo." << std::endl;
    }

    return 0;
}

