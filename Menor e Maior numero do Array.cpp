#include <iostream>
using namespace std;

int main() {
    const int TAMANHO_MAXIMO = 10;  // Tamanho m�ximo do array
    int numeros[TAMANHO_MAXIMO];    // Array de inteiros
    int tamanhoAtual = 0;           // Tamanho atual do array

    // Solicitar ao usu�rio para adicionar n�meros at� o array estar cheio
    while (tamanhoAtual < TAMANHO_MAXIMO) {
        cout << "Digite um n�mero para adicionar ao array (ou -1 para parar): ";
        int novoNumero;
        cin >> novoNumero;

        // Verificar se o usu�rio deseja parar de adicionar n�meros
        if (novoNumero == -1) {
            break;
        }

        // Adicionar o n�mero ao array e aumentar o tamanho atual
        numeros[tamanhoAtual] = novoNumero;
        tamanhoAtual++;
    }

    // Encontrar o maior n�mero no array
    int maiorNumero = numeros[0]; 
    for (int i = 1; i < tamanhoAtual; ++i) {
        if (numeros[i] > maiorNumero) {
            maiorNumero = numeros[i];
        }
    }
    
    // Encontrar o menor n�mero no array
    int menorNumero = numeros[0]; 
    for (int i = 1; i < tamanhoAtual; ++i) {
        if (numeros[i] < menorNumero) {  // Corre��o aqui
            menorNumero = numeros[i];
        }
    }

    // Imprimir o maior e o menor n�mero
    cout << "O maior n�mero no array �: " << maiorNumero << endl;
    cout << "O menor n�mero no array �: " << menorNumero << endl;
    
    return 0;
}

