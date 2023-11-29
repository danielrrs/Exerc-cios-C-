#include <iostream>

int main() {
    const int MAX_SIZE = 100;
    int meuArray[MAX_SIZE];
    int tamanho = 0;

    std::cout << "Digite n�meros para adicionar ao array. Digite -1 para encerrar." << std::endl;

    int numero;
    do {
        // Solicita ao usu�rio para digitar um n�mero
        std::cout << "Digite um n�mero (-1 para encerrar): ";
        std::cin >> numero;

        // Adiciona o n�mero ao array, se n�o for -1 e h� espa�o no array
        if (numero != -1 && tamanho < MAX_SIZE) {
            meuArray[tamanho] = numero;
            tamanho++;
        } else {
            std::cout << "Encerrando entrada de dados." << std::endl;
        }
    } while (numero != -1 && tamanho < MAX_SIZE);

    // Exibe os n�meros armazenados no array
    std::cout << "Quadrado dos n�meros no array: ";
    for (int i = 0; i < tamanho; ++i) {
     	int quadrado = meuArray[i] * meuArray[i];
	    std::cout<< quadrado << " ";
    }

    return 0;
}

