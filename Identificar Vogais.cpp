#include <iostream>

int main() {
    const int TAMANHO_MAXIMO = 100; // Tamanho m�ximo da frase
    char frase[TAMANHO_MAXIMO];
    int contadorVogais = 0;

    // Solicita ao usu�rio que insira uma frase
    std::cout << "Digite uma frase: ";
    std::cin.getline(frase, TAMANHO_MAXIMO);

    // Percorre cada caractere da frase
    for (int i = 0; frase[i] != '\0'; ++i) {
        // Verifica se o caractere � uma letra min�scula ou mai�scula e se � uma vogal
        if ((frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ||
             frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U')) {
            contadorVogais++;
        }
    }

    // Exibe o resultado
    std::cout << "A frase tem " << contadorVogais << " vogais." << std::endl;

    return 0;
}

