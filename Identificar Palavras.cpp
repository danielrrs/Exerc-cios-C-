#include <iostream>

int main() {
    std::string frase;
    int contadorPalavras = 0;

    // Solicita ao usu�rio que insira uma frase
    std::cout << "Digite uma frase: ";
    std::getline(std::cin, frase);

    // Percorre cada caractere da frase com um loop tradicional
    for (size_t i = 0; i < frase.size(); ++i) {
        // Verifica se o caractere � um espa�o em branco
        if (frase[i] == ' ' || frase[i] == '\t' || frase[i] == '\n' || frase[i] == '\r') {
            continue; // Ignora espa�os em branco
        }

        // Se n�o for um espa�o em branco e n�o estamos dentro de uma palavra, incrementa o contador
        if (i == 0 || frase[i - 1] == ' ' || frase[i - 1] == '\t' || frase[i - 1] == '\n' || frase[i - 1] == '\r') {
            contadorPalavras++;
        }
    }

    // Exibe o resultado
    std::cout << "A frase tem " << contadorPalavras << " palavra(s)." << std::endl;

    return 0;
}

