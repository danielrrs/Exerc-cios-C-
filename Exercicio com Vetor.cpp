#include <iostream>
#include <vector>

int main() {
    int tamanho;

    // Pergunta ao usu�rio o tamanho do vetor
    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> tamanho;
    
    
    std::vector<int> vetor;
    
    std::cout << "Digite " << tamanho << " n�meros separados por espa�os: ";
     
    for (int i = 0; i < tamanho; ++i){
    	int numero;
    	std::cin>> numero;
    	
    	vetor.push_back(numero);	
	}
	
	// Calcula e exibe o quadrado de cada n�mero no vetor
    std::cout << "Quadrados dos n�meros no vetor: ";
	for (int i = 0; i <tamanho; ++i){
		int quadrado = vetor[i] * vetor[i];
		std::cout << quadrado << " ";
	}
    
    return 0;
    
}
