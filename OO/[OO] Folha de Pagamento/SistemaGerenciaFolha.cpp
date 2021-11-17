#include "SistemaGerenciaFolha.hpp"
#include "FuncionarioNaoExisteException.hpp"
#include "OrcamentoEstouradoException.hpp"

SistemaGerenciaFolha::SistemaGerenciaFolha(){
    valorDoOrcamentoMax = 0;
}

SistemaGerenciaFolha::SistemaGerenciaFolha(double orcamento){
    valorDoOrcamentoMax = orcamento;
}

void SistemaGerenciaFolha::setFuncionario(Funcionario* func){
    funcionarios.push_back(func);
}

double SistemaGerenciaFolha::calculaTotalDaFolha(){
    double total = 0;

    for(int i = 0; i < funcionarios.size(); i++){
        total += funcionarios[i]->calcularSalario();
    }

    if (total > valorDoOrcamentoMax){
        throw OrcamentoEstouradoException(total);
    }

    return total;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string nomeProcurado){
    for (int i = 0; i < funcionarios.size(); i++){
        if(funcionarios[i]->getNome().find(nomeProcurado) != std::string::npos){
            return funcionarios[i]->calcularSalario();
        }
    }

    throw FuncionarioNaoExisteException(nomeProcurado);
}