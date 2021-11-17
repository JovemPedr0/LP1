#ifndef COMISSIONADO_HPP
#define COMISSIONADO_HPP

#include "Funcionario.hpp"

class Comissionado: public Funcionario{
    private:
        double vendasMensais;
        double percentualComissao;


    public:
        Comissionado();
        Comissionado(double vendasMensais, double percentualComissao);

        double calcularSalario();
};

#endif