#include "Pedido.hpp"

Pedido::Pedido(){
    codigo = 0;
    descricao = "-";
    quantidadeComprada = 0;
    precoDoItem = 0;
}

Pedido::Pedido(int codigoRecebido, std::string descricaoRecebida, int quantidadeRecebida, double precoRecebido){
    codigo = codigoRecebido;
    descricao = descricaoRecebida;
    quantidadeComprada = quantidadeRecebida;
    precoDoItem = precoRecebido;
}

int Pedido::getCodigoProduto(){
    return codigo;
}

std::string Pedido::getDescricao(){
    return descricao;
}

int Pedido::getQuantidadeComprada(){
    return quantidadeComprada;
}

double Pedido::getPreco(){
    return precoDoItem;
}

double Pedido::getTotal(){
    return precoDoItem * quantidadeComprada;
}

void Pedido::incrementaQuantidade(int qtdParaAumento){
    quantidadeComprada += qtdParaAumento;  
}