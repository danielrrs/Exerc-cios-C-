#include <iostream>
#include <vector>

int main() {
    std::vector<int> vetor1;

    // Adiciona alguns n�meros ao vetor
    for (int i = 1; i <= 5; ++i) {
        vetor1.push_back(i);
    }

    // Imprime o vetor original
    std::cout << "Vetor original: ";
    for (std::vector<int>::iterator it = vetor1.begin(); it != vetor1.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Inverte a ordem dos n�meros
    int tamanho = vetor1.size();
    for (int i = 0; i < tamanho / 2; ++i) {
        int temp = vetor1[i];
        vetor1[i] = vetor1[tamanho - 1 - i];
        vetor1[tamanho - 1 - i] = temp;
    }

    // Imprime o vetor ap�s a invers�o
    std::cout << "Vetor ap�s invers�o: ";
    for (std::vector<int>::iterator it = vetor1.begin(); it != vetor1.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

