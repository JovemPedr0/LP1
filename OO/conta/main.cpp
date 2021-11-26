#include "IConta.hpp"
#include <string>
#include <iostream>

using namespace std;

int main(){
    Conta clienteBasico;
    ContaEspecial clienteBlack;

    string nomeCliente;
    int numeroDaConta;
    double salarioMensal;

    double valorDesejadoParaSaque;
    double valorDesejadoParaDeposito;

    getline(cin, nomeCliente);
    cin >> numeroDaConta;
    cin >> salarioMensal;

    clienteBasico = Conta(nomeCliente, numeroDaConta, salarioMensal);
    
    cin >> valorDesejadoParaDeposito;
    clienteBasico.depositar(valorDesejadoParaDeposito);
    
    cin >> valorDesejadoParaSaque;
    clienteBasico.sacar(valorDesejadoParaSaque);

    getline(cin.ignore(), nomeCliente);
    cin >> numeroDaConta;
    cin >> salarioMensal;

    clienteBlack = ContaEspecial(nomeCliente, numeroDaConta, salarioMensal);
    cin >> valorDesejadoParaDeposito;
    clienteBlack.depositar(valorDesejadoParaDeposito);
    
    cin >> valorDesejadoParaSaque;
    clienteBlack.sacar(valorDesejadoParaSaque);

    cout << clienteBasico.getNomeCliente() << ", cc: " << clienteBasico.getNumeroDaConta() 
    << ", salário " << clienteBasico.getSalarioMensal() 
    << ", saldo total disponível: R$ " << clienteBasico.saldoTotalDisponivel() << endl; 
    //João Pedro, cc: 1234, salário 2000, saldo total disponível: R$ 4400

    cout << clienteBlack.getNomeCliente() << ", cc: " << clienteBlack.getNumeroDaConta() 
    << ", salário " << clienteBlack.getSalarioMensal() 
    << ", saldo total disponível: R$ " << clienteBlack.saldoTotalDisponivel() << endl;

    return 0;
}