#include "Trabalhador.hpp"
#include <iostream>

using namespace std;

int main(){
    int nCasos;
    int tipoDeTrabalhador;
    string nomeFuncionario;
    int horasTrabalhadas;
    float valor;
    float semanal;
    Trabalhador *empregado;

    cin >> nCasos;

    for (int i = 0; i < nCasos; i++){
        cin >> tipoDeTrabalhador;
        cin.ignore();
        getline(cin, nomeFuncionario);
        cin >> valor;
            if(tipoDeTrabalhador == 2){
                cin >> horasTrabalhadas;
                empregado = new TrabalhadorPorHora(valor);
                semanal = ((TrabalhadorPorHora*)empregado)->calcularPagamentoSemanal(horasTrabalhadas);
                

            }else{
                empregado =  new TrabalhadorAssalariado(valor);
                semanal = ((TrabalhadorAssalariado*)empregado)->calcularPagamentoSemanal();
                
            }

            empregado->setNome(nomeFuncionario);
            cout << empregado->getNome() << " - " <<  "Semanal: R$" << semanal << " - " << "Mensal: R$ " << empregado->getSalario() << endl;
    }
    


    return 0;
}