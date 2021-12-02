#include "Pedido.hpp"
#include <sstream>

Pedido::Pedido(){
    valorUnitario = 0;
    quantidade = 0;
}

Pedido::Pedido(double valorUnitario, int quantidade){
    this->valorUnitario = valorUnitario;
    this->quantidade = quantidade;
}

double Pedido::getTotal(){
    return valorUnitario * quantidade;
}

std::string Pedido::toString(){
    std::stringstream sout;

    sout << "R$ " << valorUnitario << ", quant: " << quantidade << ", total: R$ " << getTotal();

    return sout.str();

}