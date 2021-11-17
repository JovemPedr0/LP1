#include "Funcionario.hpp"

Funcionario::Funcionario(){
    nome = "-";
    nMatricula = 0;
}

std::string Funcionario::getNome(){
    return nome;
}

int Funcionario::getMatricula(){
    return nMatricula;
}

void Funcionario::setNome(std::string nome){
    this->nome = nome;
}

void Funcionario::setMatricula(int nMatricula){
    this->nMatricula = nMatricula;
}