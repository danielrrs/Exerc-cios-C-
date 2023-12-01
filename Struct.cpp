#include <iostream>
#include <string>

// Defini��o da struct Funcionario
struct Funcionario {
    float salario;
    std::string nome;
    char turno;  // 'M' para manh�, 'T' para tarde
};

int main() {
    const int numFuncionarios = 5;

    
    Funcionario* funcionarios = new Funcionario[numFuncionarios];

    // Preencher os dados dos funcion�rios
    for (int i = 0; i < numFuncionarios; ++i) {
        std::cout << "Funcion�rio " << i + 1 << ":" << std::endl;
        
        // Preencher nome
        std::cout << "Nome: ";
        std::cin >> funcionarios[i].nome;

        // Preencher sal�rio
        std::cout << "Sal�rio: ";
        std::cin >> funcionarios[i].salario;

        // Preencher turno
        std::cout << "Turno (M/T): ";
        std::cin >> funcionarios[i].turno;
    }

    // Calcular a m�dia dos sal�rios
    float somaSalarios = 0.0f;
    for (int i = 0; i < numFuncionarios; ++i) {
        somaSalarios += funcionarios[i].salario;
    }
    float mediaSalarios = somaSalarios / numFuncionarios;
    std::cout << "M�dia dos sal�rios: " << mediaSalarios << std::endl;

    // Contar a quantidade de pessoas em cada turno
    int quantidadeManha = 0;
    int quantidadeTarde = 0;
    for (int i = 0; i < numFuncionarios; ++i) {
        if (funcionarios[i].turno == 'M') {
            quantidadeManha++;
        } else if (funcionarios[i].turno == 'T') {
            quantidadeTarde++;
        }
    }
    std::cout << "Quantidade de pessoas no turno da manh�: " << quantidadeManha << std::endl;
    std::cout << "Quantidade de pessoas no turno da tarde: " << quantidadeTarde << std::endl;

    // Liberar a mem�ria alocada com new
    delete[] funcionarios;

    return 0;
}

