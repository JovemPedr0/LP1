#include "Pessoa2.hpp"

Pessoa::Pessoa(){
    idade = 0;
}

Pessoa::Pessoa(string nomeLido, int idadeLida, string nTelefoneLido){
    nome = nomeLido;
    idade = idadeLida;
    nTelefone = nTelefoneLido;
}

int Pessoa::getIdade(){
    return idade;
}

string Pessoa::getNome(){
    return nome;
}

string Pessoa::getNumeroDeTelefone(){
    return nTelefone;
}

void Pessoa::setIdade(int idadeLida){
    idade = idadeLida;
}
void Pessoa::setNome(string nomeLido){
    nome = nomeLido;
}
void Pessoa::setNumeroTelefone(string telefoneLido){
    nTelefone = telefoneLido;
}