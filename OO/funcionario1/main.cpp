#include "Funcionario.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(){
    int nFuncionarios;

    cin >> nFuncionarios;

    Funcionario empresa[nFuncionarios];

    for(int i = 0; i < nFuncionarios; i++){
        getline(cin.ignore(), empresa[i].nome);
        getline(cin, empresa[i].sobrenome);
        cin >> empresa[i].vSalarioMensal;
        empresa[i].getSalarioAnual();
    }

    for(int i = 0; i < nFuncionarios; i++){
        cout <<  empresa[i].nome << " " <<  empresa[i].sobrenome << " - " << empresa[i].vSalarioMensal << " - " << empresa[i].vSalarioAnual << endl;
    }


    return 0;
}