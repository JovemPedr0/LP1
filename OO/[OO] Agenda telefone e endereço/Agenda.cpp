#include "Agenda.hpp"

Endereco::Endereco(){
    nomeDaRua = "-";
    numeroResidencia = "-";
    nomeDoBairro = "-";
    nomeDaCidade = "-";
    nomeDoEstado = "-";
    nCEP = "-";
}

Endereco::Endereco(std::string nomeDaRua, std::string numeroResidencia, std::string nomeDoBairro, std::string nomeDaCidade, std::string nomeDoEstado, std::string nCEP){
    this->nomeDaRua = nomeDaRua;
    this->numeroResidencia = numeroResidencia;
    this->nomeDoBairro = nomeDoBairro;
    this->nomeDaCidade = nomeDaCidade;
    this->nomeDoEstado = nomeDoEstado;
    this->nCEP = nCEP;
}

std::string Endereco::getRua(){
    return nomeDaRua;
}

std::string Endereco::getNumero(){
    return numeroResidencia;
}

std::string Endereco::getBairro(){
    return nomeDoBairro;
}

std::string Endereco::getCidade(){
    return nomeDaCidade;
}

std::string Endereco::getEstado(){
    return nomeDoEstado;
}

std::string Endereco::getCEP(){
    return nCEP;
}

void Endereco::setRua(std::string nomeDaRua){
    this->nomeDaRua = nomeDaRua;
}

void Endereco::setNumero(std::string numeroResidencia){
    this->numeroResidencia = numeroResidencia;
}

void Endereco::setBairro(std::string nomeDoBairro){
    this->nomeDoBairro = nomeDoBairro;
}

void Endereco::setCidade(std::string nomeDaCidade){
    this->nomeDaCidade = nomeDaCidade;
}

void Endereco::setEstado(std::string nomeDoEstado){
    this->nomeDoEstado = nomeDoEstado;
}

void Endereco::setCEP(std::string nCEP){
    this->nCEP = nCEP;
}

std::string Endereco::EnderecotoString(){
return nomeDaRua + ", " + numeroResidencia + ", " + nomeDoBairro + ". " + nomeDaCidade + " - " + nomeDoEstado + ". " + "CEP: " + nCEP + "\n";
}

Pessoa::Pessoa(){
    
}

Pessoa::Pessoa(std::string nome){
    this->nome = nome;
}

Pessoa::Pessoa(std::string nome, Endereco pessoal, std::string numeroDeTelefone){
    this->nome = nome;
    this-> pessoal = pessoal;
    this->numeroDeTelefone = numeroDeTelefone;
}

std::string Pessoa::PessoaToString(){
    return nome + ", " + numeroDeTelefone + "\n" + pessoal.EnderecotoString();
}