#include "Pagamento.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(){
    int nCasos;
    double valorPagamento;
    string nomeDoFuncionario;
    string funcionarioProcurado;

    Pagamento gerado;
    ControleDePagamentos pagamentosRealizados;

    cin >> nCasos;
    cin.ignore();

    for (int i = 0; i < nCasos; i++){
        cin >> valorPagamento;
        cin.ignore();
        getline(cin, nomeDoFuncionario);
        

        gerado.setNomeDoFuncionario(nomeDoFuncionario);
        gerado.setValorPagamento(valorPagamento);

        pagamentosRealizados.setPagamento(gerado, i);

    }
    
    getline(cin, funcionarioProcurado);

    int localizador;

    localizador = pagamentosRealizados.getIndexFuncionario(funcionarioProcurado);

    if(localizador != -1){
        cout << pagamentosRealizados.getPagamento(localizador).getNomeDoFuncionario() << ": R$ " << pagamentosRealizados.getPagamento(localizador).getValorPagamento() << endl;
    }else{
        cout << funcionarioProcurado << "não encontrado(a)." << endl;
    }
    
    cout << "Total: R$ " << pagamentosRealizados.CalculaTotalDePagamentos() << endl;




    return 0;
}