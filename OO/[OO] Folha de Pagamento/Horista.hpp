#ifndef HORISTA_HPP
#define HORISTA_HPP
#include "Funcionario.hpp"


class Horista: public Funcionario{
    private:
        double salarioPorHora;
        double nHorasTrabalhadas;

    public:
        Horista();
        Horista(double salarioPorHora, double nHorasTrabalhadas);

        double calcularSalario();
};

#endif