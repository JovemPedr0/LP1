#include "Mesa.hpp"

MesaDeRestaurante::MesaDeRestaurante(){

}

void MesaDeRestaurante::adicionarPedido(Pedido* p){

    for (unsigned int i = 0; i < pedidos.size(); i++){
        if(pedidos[i]->getCodigoProduto() ==  p->getCodigoProduto()){
            pedidos[i]->incrementaQuantidade(p->getQuantidadeComprada());
            return;
        }
    }
    
    pedidos.push_back(p);    
}

void MesaDeRestaurante::zeraPedidos(){

    for (unsigned int i = 0; i < pedidos.size(); i++){
        delete pedidos[i];
    }

    pedidos.clear();
}

float MesaDeRestaurante::calculaTotal(){
    double valorTotal = 0;

    for (unsigned int i = 0; i < pedidos.size(); i++){
        valorTotal += pedidos[i]->getTotal();
    }
    
    return valorTotal;
}

void MesaDeRestaurante::exibeConta(){

    for (unsigned int i = 0; i < pedidos.size(); i++){
       std::cout << pedidos[i]->getCodigoProduto() << " - " << pedidos[i]->getDescricao() << " - " << 
       pedidos[i]->getQuantidadeComprada() << " - " << pedidos[i]->getPreco() << " - R$ "<< 
       pedidos[i]->getTotal() << std::endl;
    }
    
    std::cout << "Total: R$ " << calculaTotal() << std::endl;
}