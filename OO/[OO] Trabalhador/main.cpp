#include "Trabalhador.hpp"
#include <iostream>

using namespace std;

int main(){
    int nCasos;
    int tipoDeTrabalhador;
    string nomeFuncionario;
    int horasTrabalhadas;
    float valor;

    cin >> nCasos;

    for (int i = 0; i < nCasos; i++){
        cin >> tipoDeTrabalhador;
        cin.ignore();
        getline(cin, nomeFuncionario);
        cin >> valor;
            if(tipoDeTrabalhador == 2){
                cin >> horasTrabalhadas;
                TrabalhadorPorHora gerado = TrabalhadorPorHora(valor);
                gerado.setNome(nomeFuncionario);
                cout << gerado.getNome() << " - " << "Semanal: R$ " << gerado.calcularPagamentoSemanal(horasTrabalhadas) << " - " << "Mensal: R$ " << gerado.getSalario() << endl;

            }else{
                TrabalhadorAssalariado criado = TrabalhadorAssalariado(valor);
                criado.setNome(nomeFuncionario);
                cout << criado.getNome() << " - " << "Semanal: R$ " << criado.calcularPagamentoSemanal() << " - " << "Mensal: R$ " << criado.getSalario() << endl;
            }
        
    }
    


    return 0;
}