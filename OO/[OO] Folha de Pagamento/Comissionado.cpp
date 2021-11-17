#include "Comissionado.hpp"

Comissionado::Comissionado(){
    vendasMensais = 0;
    percentualComissao = 0;
}

Comissionado::Comissionado(double vendasMensais, double percentualComissao){
    this->vendasMensais = vendasMensais;
    this->percentualComissao = percentualComissao;
}

double Comissionado::calcularSalario(){
    return percentualComissao * vendasMensais;
}