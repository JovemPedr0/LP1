#include "Pagamento.hpp"

Pagamento::Pagamento(){
    valorPagamento = 0;
}

double Pagamento::getValorPagamento(){
    return valorPagamento;
}

std::string Pagamento::getNomeDoFuncionario(){
    return nomeDoFuncionario;
}

void Pagamento::setValorPagamento(double valorPagamento){
    this->valorPagamento = valorPagamento;
}

void Pagamento::setNomeDoFuncionario(std::string nomeDoFuncionario){
    this->nomeDoFuncionario = nomeDoFuncionario;
}

ControleDePagamentos::ControleDePagamentos(){

}

void ControleDePagamentos::setPagamento(Pagamento generic, int indice){
    controleTotal[indice] = generic;
}

Pagamento ControleDePagamentos::getPagamento(int pos){
    return controleTotal[pos];
}

float ControleDePagamentos::CalculaTotalDePagamentos(){
    float valorTotal = 0;
        for (int i = 0; i < MAX_PAGAMENTOS; i++){
            valorTotal += controleTotal[i].getValorPagamento();
        }
    return valorTotal;
}

int ControleDePagamentos::getIndexFuncionario(std::string nomeDoFuncionario){
    for (int i = 0; i < MAX_PAGAMENTOS; i++){
        if(controleTotal[i].getNomeDoFuncionario().find(nomeDoFuncionario) != std::string::npos){
            //if(controleTotal[i].getNomeDoFuncionario() == nomeDoFuncionario)
            return i;
        }
    }

    return -1;
    
}