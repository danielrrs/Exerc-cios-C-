#include <iostream>

int main() {
    const int MAX_SIZE = 100;
    int meuArray[MAX_SIZE];
    int tamanho = 0;

    std::cout << "Digite números para adicionar ao array. Digite -1 para encerrar." << std::endl;

    int numero;
    do {
        // Solicita ao usuário para digitar um número
        std::cout << "Digite um número (-1 para encerrar): ";
        std::cin >> numero;

        // Adiciona o número ao array, se não for -1 e há espaço no array
        if (numero != -1 && tamanho < MAX_SIZE) {
            meuArray[tamanho] = numero;
            tamanho++;
        } else {
            std::cout << "Encerrando entrada de dados." << std::endl;
        }
    } while (numero != -1 && tamanho < MAX_SIZE);

    // Exibe os números armazenados no array
    std::cout << "Quadrado dos números no array: ";
    for (int i = 0; i < tamanho; ++i) {
     	int quadrado = meuArray[i] * meuArray[i];
	    std::cout<< quadrado << " ";
    }

    return 0;
}

