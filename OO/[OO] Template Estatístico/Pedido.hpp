#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <string>

class Pedido{
    private:
        double valorUnitario;
        int quantidade;

    public:
        Pedido();
        Pedido(double valorUnitario, int quantidade);
        
        double getTotal();

        std::string toString();
};



#endif