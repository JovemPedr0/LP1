#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <string>

class Pedido{
    private:
        int codigo;
        std::string descricao;
        int quantidadeComprada;
        double precoDoItem;


    public:
        Pedido();
        Pedido(int codigoRecebido, std::string descricaoRecebida, int quantidadeRecebida, double precoRecebido);

        int getCodigoProduto();
        std::string getDescricao();
        int getQuantidadeComprada();
        double getPreco();

        double getTotal();

        void incrementaQuantidade(int qtdParaAumento);
};


#endif