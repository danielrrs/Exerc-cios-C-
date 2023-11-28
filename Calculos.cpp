#include <iostream>

int main() {
    //Variaveis
    int escolha = 0;
    int num1 = 0;
    int num2 = 0;

    //Menu
    std::cout << "\nMENU";
    std::cout << "\n1.Adição";
    std::cout << "\n2.Subrtração";
    std::cout << "\n3.Multiplicação";
    std::cout << "\n4.Divisão";
    std::cout << "\n5.Sair\n";

    //Escolha de operação
    std::cout << "\nEscolha uma das opções:";
    std::cin >> escolha;

    //Operações
    if(escolha == 1){
        std::cout<<"\nDigite os dois números que você deseja somar:";
        std::cin >>num1>>num2;
        std::cout<<"\nA soma dos dois números é "<<num1 + num2;
    }
    else if(escolha == 2){
        std::cout<<"\nDigite os dois números que você deseja subtrair:";
        std::cin >>num1>>num2;
        std::cout<<"\nO resultado da subtração é "<<num1 - num2;
    }
    else if(escolha == 3){
        std::cout<<"\nDigite os números que você deseja multplicar pelo outro:";
        std::cin >>num1>>num2;
        std::cout<<"\nO resultado da multiplicação é "<<num1 * num2;
    }
    else if(escolha == 4){
        std::cout<<"\nDigite os dois números que você deseja dividir:";
        std::cin >>num1>>num2;
        std::cout<<"\nO resultado da divisão é "<<num1 / num2;
    }
    else if(escolha == 5){
        std::cout<<"\nVocê escolheu sair.";
        return 0;
    }
    else{
        std::cout<<"\nEssa opção não existe.";
    }
    
    


    
    return 0;
}