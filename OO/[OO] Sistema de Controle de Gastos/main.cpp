#include "Despesa.hpp"
#include <iostream>

using namespace std;

int main(){
    string nome, tipoDeGasto, tipoProcurado;
    double valor;
    int nCasos;
    Despesa criada;
    Controle gastosRealizados;

    cin >> nCasos;
    cin.ignore();

    for (int i = 0; i < nCasos; i++){
        getline(cin, nome);
        cin >> valor;
        cin.ignore();
        getline(cin, tipoDeGasto);

        criada.setNome(nome);
        criada.setValor(valor);
        criada.setTipoDeGasto(tipoDeGasto);

        gastosRealizados.setDespesa(criada, i);
    }
    
    getline(cin, tipoProcurado);
    if (gastosRealizados.existeDespesaDoTipo(tipoProcurado) == true){
        for (int i = 0; i < nCasos; i++){
            if(gastosRealizados.getDespesa(i).getTipoDeGasto() == tipoProcurado){
                cout << gastosRealizados.getDespesa(i).getNome() << ", R$ " << gastosRealizados.getDespesa(i).getValor() << endl;
            }
        }
    }else{
        cout << "Nenhuma despesa do tipo especificado" << endl;
    }
   
    cout<< "Total: "
        << gastosRealizados.CalculaTotalPorTipo(tipoProcurado)
        << "/"
        << gastosRealizados.CalculaTotalDeDespesas() << endl;
        
    return 0;
}
