#ifndef ASSALARIADO_HPP
#define ASSALARIADO_HPP

#include "Funcionario.hpp"

class Assalariado: public Funcionario{
    private:
        double salario;

    public:
        Assalariado();
        Assalariado(double salario);
        
        double calcularSalario();
};


#endif