//Receba a BASE e ALTURA de um triângulo e mostre na tela a ÁREA do triângulo.

#include <iostream>

int main() {
    //Variaveis
    float base = 0;
    float altura = 0;

    //Coleta dos dados
    std::cout <<"Digite a base e a altura.\n";
    std::cin >> base >> altura;


    std::cout << "Base: " << base << " Altura: " << altura << std::endl;

    //Calculo da área do triângulo
    std::cout <<"Area:"<< base*altura/2;
        
    
    
    return 0;
}