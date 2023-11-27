#include<iostream>

int main(){
    //Variaveis
    int idade = 0;
    float peso = 0; 
    
    // Solicitação e recebimento da idade
    std::cout << "Digite sua idade e ";
    std::cin >> idade;

    // Solicitação e recebimento do peso
    std::cout << "digite seu peso: \n";
    std::cin >> peso;
    
    std::cout<< "Idade: " << idade << ", Peso: " << peso << std::endl;

    
    //Operações
    std::cout<<"Adiçao:";
    std::cout<<idade + peso;

    std::cout<<"\nSubtração:";
    std::cout<<idade - peso;

    std::cout<<"\nMultiplicação:";
    std::cout<<idade * peso;

    std::cout<<"\nDivisão:";
    std::cout<<idade / peso;
    

    return 0;
}