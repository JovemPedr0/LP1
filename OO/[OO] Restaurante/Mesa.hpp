#ifndef MESA_HPP
#define MESA_HPP

#include <vector>
#include <iostream>
#include "Pedido.hpp"

class MesaDeRestaurante{
    private:
        std::vector <Pedido*> pedidos;

    public:
        MesaDeRestaurante();
        void adicionarPedido(Pedido* p);
        void zeraPedidos();
        float calculaTotal();
        void exibeConta();
        
};




#endif