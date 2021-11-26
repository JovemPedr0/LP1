#include "IConta.hpp"

Conta::Conta(){
    saldoAtual = 0;
}

Conta::Conta(std::string nomeCliente, int numeroDaConta, double salarioMensal){
    this->nomeCliente = nomeCliente;
    this->numeroDaConta = numeroDaConta;
    this->salarioMensal = salarioMensal;
    definirLimite();
}

std::string Conta::getNomeCliente(){
    return nomeCliente;
}

int Conta::getNumeroDaConta(){
    return numeroDaConta;
}

double Conta::getSalarioMensal(){
    return salarioMensal;
}

double Conta::getSaldoAtual(){
    return saldoAtual;
}

double Conta::getLimiteDisponivel(){
    return limiteDisponivel;
}

void Conta::setNomeCliente(std::string nomeCliente){
    this->nomeCliente = nomeCliente;
}

void Conta::setNumeroDaConta(int numeroDaConta){
    this->numeroDaConta = numeroDaConta;
}

void Conta::setSalarioMensal(double salarioMensal){
    this->salarioMensal = salarioMensal;
}

void Conta::setSaldoAtual(double saldoAtual){
    this->saldoAtual = saldoAtual;
}

void Conta::setLimite(double limiteDisponivel){
    this->limiteDisponivel = limiteDisponivel;
}

void Conta::sacar(double valorSacado){
    this->saldoAtual = saldoAtual - valorSacado;
}

void Conta::depositar(double valorDepositado){
    this->saldoAtual = saldoAtual + valorDepositado;
}

double Conta::saldoTotalDisponivel(){
    return saldoAtual + limiteDisponivel;
}

void Conta::definirLimite(){
    double novoLimite = 0;
        novoLimite = getSalarioMensal() * 2;
    setLimite(novoLimite);
}

ContaEspecial::ContaEspecial(){
    
}

ContaEspecial::ContaEspecial(std::string nomeCliente, int numeroDaConta, double salarioMensal){
    this->nomeCliente = nomeCliente;
    this->numeroDaConta = numeroDaConta;
    this->salarioMensal = salarioMensal;
    definirLimite();
}

void ContaEspecial::sacar(double valorSacado){
    this->saldoAtual = saldoAtual - valorSacado;
}

void ContaEspecial::depositar(double valorDepositado){
    this->saldoAtual = saldoAtual + valorDepositado;
}

double ContaEspecial::saldoTotalDisponivel(){
    return saldoAtual + limiteDisponivel;
}

void ContaEspecial::definirLimite(){
    double novoLimite = 0;
        novoLimite = getSalarioMensal() * 3;
    setLimite(novoLimite); 
}