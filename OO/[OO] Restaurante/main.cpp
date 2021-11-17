#include "Restaurante.hpp"
#include "Mesa.hpp"
#include "Pedido.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main(){
    Pedido *p;
    Restaurante rest;

    int codigo, qtdComprada, numeroDaMesa;
    double preco;
    string descricaoPdt;
    
    do{
        cin >> codigo;

        if(codigo < 0){
            break;
        }

        cin.ignore();
        getline(cin, descricaoPdt);
        cin >> qtdComprada;
        cin >> preco;
        cin >> numeroDaMesa;

        p = new Pedido(codigo, descricaoPdt, qtdComprada, preco);

        rest.adicionarPedido(p, numeroDaMesa);

    }while(codigo >= 0);
    
    for (int i = 0; i < 10; i++){
        if(rest.getMesa(i).calculaTotal() > 0){
            cout << "Mesa " << i << endl;
            rest.getMesa(i).exibeConta();
            cout << endl;
        }
    }
    
    cout << "Total Restaurante: R$ " << rest.calculaTotalRestaurante() << endl;
    


    return 0;
}
