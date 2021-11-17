#ifndef RESTAURANTE_HPP
#define RESTAURANTE_HPP

#include <vector>
#include "Mesa.hpp"

class Restaurante{
    private:
        std::vector <MesaDeRestaurante> mesasDisp = std::vector <MesaDeRestaurante>(10);

    public:
        Restaurante();

        void adicionarPedido(Pedido* p, int numeroDaMesa);
        double calculaTotalRestaurante();
        MesaDeRestaurante getMesa(int numeroDaMesaProcurada);

        
};


#endif