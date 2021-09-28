#include "Despesa.hpp"

Despesa::Despesa(){
    valor = 0;
}

void Despesa::setNome(std::string nome){
    this->nome = nome;
}

void Despesa::setValor(double valor){
    this->valor = valor;
}

void Despesa::setTipoDeGasto(std::string tipoDeGasto){
    this->tipoDeGasto = tipoDeGasto;
}

std::string Despesa::getNome(){
    return nome;
}

double Despesa::getValor(){
    return valor;
}

std::string Despesa::getTipoDeGasto(){
    return tipoDeGasto;
}

Controle::Controle(){

}

void Controle::setDespesa(Despesa generica, int pos){
    gastos[pos] = generica;
}

Despesa Controle::getDespesa(int pos){
    return gastos[pos];
}

float Controle::CalculaTotalDeDespesas(){
    double total = 0;
        for (int i = 0; i < MAX_DESPESA; i++){
            total += gastos[i].getValor();
        }
    return total;
}

float Controle::CalculaTotalPorTipo(std::string tipo){
    double total = 0;
        for (int i = 0; i < MAX_DESPESA; i++){
            if(tipo == gastos[i].getTipoDeGasto()){
                total += gastos[i].getValor();
            }   
        }
    return total;
}

bool Controle::existeDespesaDoTipo(std::string tipo){
    for (int i = 0; i < MAX_DESPESA; i++){
            if(tipo == gastos[i].getTipoDeGasto()){
                return true;
            }else{
                return false;
            }   
        }
}