#include "Trabalhador.hpp"

Trabalhador::Trabalhador(){
    salario = 0;
}

std::string Trabalhador::getNome(){
    return nome;
}

double Trabalhador::getSalario(){
    return salario;
}

void Trabalhador::setNome(std::string nomeRecebido){
    nome = nomeRecebido;
}

void Trabalhador::setSalario(double salarioRecebido){
    salario = salarioRecebido;
}

TrabalhadorAssalariado::TrabalhadorAssalariado(double salario){
    this->salario = salario;
}

float TrabalhadorAssalariado::calcularPagamentoSemanal(){
    return salario / 4;
}

TrabalhadorPorHora::TrabalhadorPorHora(float valor){
    valorDaHora = valor;
}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais){
    float semanal;
    
        if(horasSemanais <= 40){
            semanal = valorDaHora * horasSemanais;
        }else{
            semanal = valorDaHora * 40;
            semanal += valorDaHora * 1.5 * (horasSemanais - 40);
        }

        salario = semanal * 4;

    return semanal;
}