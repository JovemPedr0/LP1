#include "Funcionario.hpp"
#include <string>
#include <iostream>

Funcionario::Funcionario(){
    vSalarioAnual = 0;
}

Funcionario::Funcionario(std::string nome, std::string sobrenome, double vSalarioMensal){
    this->nome = nome;
    this->sobrenome = sobrenome;
    this->vSalarioMensal = vSalarioMensal;
}

std::string Funcionario::getNome(){
    return nome;
}

std::string Funcionario::getSobrenome(){
    return sobrenome;
}

double Funcionario::getSalarioMensal(){
    return vSalarioMensal;
}

double Funcionario::getSalarioAnual(){
    vSalarioAnual = vSalarioMensal * 12; 
    return vSalarioAnual;
}

void Funcionario::setNome(std::string nome){
    this->nome = nome;
}

void Funcionario::setSobrenome(std::string sobrenome){
    this->sobrenome = sobrenome;
}

void Funcionario::setSalarioMensal(double vSalarioMensal){
    this->vSalarioMensal = vSalarioMensal;
}

double Funcionario::aumentaSalario(float percentual){
        vSalarioAnual += getSalarioAnual() * percentual;
    return vSalarioAnual;
}

void Funcionario::printFuncionario(){
    std::cout << getNome() << " " << getSobrenome() << " - " << getSalarioMensal() << " - " << getSalarioAnual() << std::endl;
    
    std::cout << aumentaSalario(0.1) << std::endl;
}