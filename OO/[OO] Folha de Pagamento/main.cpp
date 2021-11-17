#include "Includes.hpp"

using namespace std;

int main(){
    double orcamentoMaxRecebido, valorGenerico, salarioPorHora, horasTrabalhadas, nVendas, nComissoes;
    string nome;
    int nMatricula;
    Funcionario *empregado;

    cin >> orcamentoMaxRecebido;

    SistemaGerenciaFolha empresaJ = SistemaGerenciaFolha(orcamentoMaxRecebido);

    for(int i = 0; i < 3; i++){
        cin.ignore();
        getline(cin, nome);
        cin >> nMatricula;
        cin >> valorGenerico;

        switch (i){
        case 0:
            empregado = new Assalariado(valorGenerico);
            break;
        
        case 1:
            cin >> horasTrabalhadas;
            empregado = new Horista(valorGenerico, horasTrabalhadas);
            break;
        
        case 2:
            cin >> nComissoes;
            empregado = new Comissionado(valorGenerico, nComissoes);
        }
        empregado->setNome(nome);
        empregado->setMatricula(nMatricula);

        empresaJ.setFuncionario(empregado);
    }

    string nomeProcurado;
    cin.ignore();

    for (int i = 0; i < 3; i++){
        getline(cin, nomeProcurado);
        try{
            cout << empresaJ.consultaSalarioFuncionario(nomeProcurado) << endl;
        }
        catch(FuncionarioNaoExisteException e){
            cout << e.getMessage();
        }
    }

    try{
        cout << empresaJ.calculaTotalDaFolha() << endl;
    }
    catch(OrcamentoEstouradoException e){
        cout << e.getMessage();
    }

    return 0;
}
