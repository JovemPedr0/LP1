#ifndef SISTEMAGERENCIAFOLHA_HPP
#define SISTEMAGERENCIAFOLHA_HPP
#include <vector>
#include "Funcionario.hpp"

class SistemaGerenciaFolha{
    private:
        std::vector<Funcionario*> funcionarios;
        double valorDoOrcamentoMax;      

    public:
        SistemaGerenciaFolha();
        SistemaGerenciaFolha(double orcamento);

        void setFuncionario(Funcionario* func);
        
        double calculaTotalDaFolha();

        double consultaSalarioFuncionario(std::string nome);
};

#endif