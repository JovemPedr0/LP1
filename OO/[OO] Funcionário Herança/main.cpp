#include "FuncionarioH.hpp"
#include <iostream>

using namespace std;

int main(){
    FuncionarioH empregado;
    Consultor agiota;

    int matricula;
    string nome;
    float salario;

    cin >> matricula;
    cin.ignore();
    getline(cin, nome);
    cin >> salario;

    empregado.setMatricula(matricula);
    empregado.setNome(nome);
    empregado.setSalario(salario);
    
    cout << empregado.getMatricula() << " - " << empregado.getNome() << " - R$" << empregado.getSalario() << endl;


    cin >> matricula;
    cin.ignore();
    getline(cin, nome);
    cin >> salario;

    agiota.setMatricula(matricula);
    agiota.setNome(nome);
    agiota.setSalario(salario);
    
    cout << agiota.getMatricula() << " - " << agiota.getNome() << " - R$" << agiota.getSalario() << endl;


    return 0;
}
