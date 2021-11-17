#include "Restaurante.hpp"

Restaurante::Restaurante(){

}

void Restaurante::adicionarPedido(Pedido* p, int numeroDaMesa){
    mesasDisp[numeroDaMesa].adicionarPedido(p);
}

double Restaurante::calculaTotalRestaurante(){
    double valorTotal = 0;

    for (unsigned int i = 0; i < mesasDisp.size(); i++){
        valorTotal += mesasDisp[i].calculaTotal();
    }

    return valorTotal;
}

MesaDeRestaurante Restaurante::getMesa(int numeroDaMesaProcurada){
    return mesasDisp[numeroDaMesaProcurada];
}