#include "Horista.hpp"

Horista::Horista(){
    salarioPorHora = 0;
    nHorasTrabalhadas = 0;
}

Horista::Horista(double salarioPorHora, double nHorasTrabalhadas){
    this->salarioPorHora = salarioPorHora;
    this->nHorasTrabalhadas = nHorasTrabalhadas;
}

double Horista::calcularSalario(){
    double salarioSemanal = 0;

    if(nHorasTrabalhadas <= 40){
        salarioSemanal = nHorasTrabalhadas * salarioPorHora;
    }else{
        salarioSemanal = (40 * salarioPorHora) + (nHorasTrabalhadas - 40) * salarioPorHora * 1.5;
    }
    
    return salarioSemanal * 4;
}