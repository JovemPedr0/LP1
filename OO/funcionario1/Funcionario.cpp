#include "Funcionario.hpp"

Funcionario::Funcionario(){
    vSalarioAnual = 0;
}

void Funcionario::getSalarioAnual(){
    vSalarioAnual = vSalarioMensal * 12;   
}