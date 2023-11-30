#include <iostream>
using namespace std;

int main() {
    const int TAMANHO_MAXIMO = 10;  // Tamanho máximo do array
    int numeros[TAMANHO_MAXIMO];    // Array de inteiros
    int tamanhoAtual = 0;           // Tamanho atual do array

    // Solicitar ao usuário para adicionar números até o array estar cheio
    while (tamanhoAtual < TAMANHO_MAXIMO) {
        cout << "Digite um número para adicionar ao array (ou -1 para parar): ";
        int novoNumero;
        cin >> novoNumero;

        // Verificar se o usuário deseja parar de adicionar números
        if (novoNumero == -1) {
            break;
        }

        // Adicionar o número ao array e aumentar o tamanho atual
        numeros[tamanhoAtual] = novoNumero;
        tamanhoAtual++;
    }

    // Encontrar o maior número no array
    int maiorNumero = numeros[0]; 
    for (int i = 1; i < tamanhoAtual; ++i) {
        if (numeros[i] > maiorNumero) {
            maiorNumero = numeros[i];
        }
    }
    
    // Encontrar o menor número no array
    int menorNumero = numeros[0]; 
    for (int i = 1; i < tamanhoAtual; ++i) {
        if (numeros[i] < menorNumero) {  // Correção aqui
            menorNumero = numeros[i];
        }
    }

    // Imprimir o maior e o menor número
    cout << "O maior número no array é: " << maiorNumero << endl;
    cout << "O menor número no array é: " << menorNumero << endl;
    
    return 0;
}

