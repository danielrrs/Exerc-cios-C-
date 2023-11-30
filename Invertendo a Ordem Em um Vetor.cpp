#include <iostream>
#include <vector>

int main() {
    std::vector<int> vetor1;

    // Adiciona alguns números ao vetor
    for (int i = 1; i <= 5; ++i) {
        vetor1.push_back(i);
    }

    // Imprime o vetor original
    std::cout << "Vetor original: ";
    for (std::vector<int>::iterator it = vetor1.begin(); it != vetor1.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Inverte a ordem dos números
    int tamanho = vetor1.size();
    for (int i = 0; i < tamanho / 2; ++i) {
        int temp = vetor1[i];
        vetor1[i] = vetor1[tamanho - 1 - i];
        vetor1[tamanho - 1 - i] = temp;
    }

    // Imprime o vetor após a inversão
    std::cout << "Vetor após inversão: ";
    for (std::vector<int>::iterator it = vetor1.begin(); it != vetor1.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

