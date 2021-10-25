#include "FuncionarioH.hpp"

FuncionarioH::FuncionarioH(){
    nMatricula = 0;
    nome = "-";
    valorDoSalario = 0;
}

int FuncionarioH::getMatricula(){
    return nMatricula;
}

std::string FuncionarioH::getNome(){
    return nome;
}

float FuncionarioH::getSalario(){
    return valorDoSalario;
}

void FuncionarioH::setMatricula(int nMatricula){
    this->nMatricula = nMatricula;
}

void FuncionarioH::setNome(std::string nome){
    this->nome = nome;
}

void FuncionarioH::setSalario(float valorDoSalario){
    this->valorDoSalario = valorDoSalario;
}

float Consultor::getSalario(){
    return valorDoSalario + (valorDoSalario * 0.1);
}

float Consultor::getSalario(float percentual){
    return valorDoSalario * (1 + percentual);
}