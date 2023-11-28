#include <iostream>
#include <stdlib.h>


int main() {
    int palpite = 0;
    int arvore = 0;
    int tiro = 5;

    
    std::cout << "Bem vindo ao jogo de matar alienigenas. Um de vocês sera o Et e o outro o fazendeiro dono do bosque o objetivo do et é se esconder e o do fazendeiro acertar o et com um tiro. Vocês tem 5 chances\n";

    //Escolhendo a arvore - ET  
    std::cout <<"Se esconda atrás de 1 das 100 arvores Et: (Escolha um numero de 1 a 100)";
    std::cin>>arvore;
    std::cout<<"\nVocê se escondeu atrás da arvore "<<arvore <<", não se esqueca.";
    //Limpar terminal para o fazendeiro n ver
    if(arvore > 0){
        system("cls");
    } 

    //Vez do fazendeiro
    while(tiro > 0){
        std::cout<< "\nEscolha uma arvore para dar o tiro:";
            if(palpite == arvore){
            std::cout<<"\nVocê matou o ET e ganhou o jogo, parabéns!";
                break;
            }
        else{
            std::cout<< "\nVocê errou, escolha outra árvore para dar o tiro! ";
            std::cin>>palpite;
            tiro = tiro - 1;
        }
    }
    


    
    return 0;
}