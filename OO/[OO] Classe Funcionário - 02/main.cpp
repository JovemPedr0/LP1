#include "Funcionario.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(){
    int nFuncionarios;
    string nome;
    string sobrenome;
    double vSalarioMensal;
    cin >> nFuncionarios;

    Funcionario empresa[nFuncionarios];

    for(int i = 0; i < nFuncionarios; i++){
        getline(cin.ignore(), nome);
        getline(cin, sobrenome);
        cin >> vSalarioMensal;
        empresa[i] = Funcionario(nome, sobrenome, vSalarioMensal);
    }

    for(int i = 0; i < nFuncionarios; i++){
        empresa[i].printFuncionario();
    }

    


    return 0;
}