#include <iostream>
#include <vector>

int main() {
    int tamanho;

    // Pergunta ao usuário o tamanho do vetor
    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> tamanho;
    
    
    std::vector<int> vetor;
    
    std::cout << "Digite " << tamanho << " números separados por espaços: ";
     
    for (int i = 0; i < tamanho; ++i){
    	int numero;
    	std::cin>> numero;
    	
    	vetor.push_back(numero);	
	}
	
	// Calcula e exibe o quadrado de cada número no vetor
    std::cout << "Quadrados dos números no vetor: ";
	for (int i = 0; i <tamanho; ++i){
		int quadrado = vetor[i] * vetor[i];
		std::cout << quadrado << " ";
	}
    
    return 0;
    
}
