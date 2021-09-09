#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP
#include <string>

class Funcionario{
    public:
        Funcionario();
        std::string nome;
        std::string sobrenome;
        double vSalarioMensal;
        double vSalarioAnual;
        void getSalarioAnual();
};


#endif