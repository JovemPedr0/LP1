#include "Assalariado.hpp"

Assalariado::Assalariado(){
    salario = 0;
}

Assalariado::Assalariado(double salario){
    this->salario = salario;
}

double Assalariado::calcularSalario(){
    return salario;
}