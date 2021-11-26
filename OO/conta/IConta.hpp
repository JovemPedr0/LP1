#ifndef ICONTA_HPP
#define ICONTA_HPP

#include <string>

class IConta{
    public:
        virtual void sacar(double valorSacado) = 0;
        virtual void depositar(double valorDepositado) = 0;
        virtual double saldoTotalDisponivel() = 0;
        virtual void definirLimite() = 0;
};

class Conta: public IConta{
    protected:
        std::string nomeCliente;
        int numeroDaConta;
        double salarioMensal;
        double saldoAtual;
        double limiteDisponivel;

    public:
        Conta();
        Conta(std::string nomeCliente, int numeroDaConta, double salarioMensal);
        
        std::string getNomeCliente();
        int getNumeroDaConta();
        double getSalarioMensal();
        double getSaldoAtual();
        double getLimiteDisponivel();

        void setNomeCliente(std::string nomeCliente);
        void setNumeroDaConta(int numeroDaConta);
        void setSalarioMensal(double salarioMensal);
        void setSaldoAtual(double saldoAtual);
        void setLimite(double limiteDisponivel);

        void sacar(double valorSacado);
        void depositar(double valorDepositado);
        double saldoTotalDisponivel();
        void definirLimite();
};

class ContaEspecial: public Conta{
    public:
        ContaEspecial();
        ContaEspecial(std::string nomeCliente, int numeroDaConta, double salarioMensal);

        void sacar(double valorSacado);
        void depositar(double valorDepositado);
        double saldoTotalDisponivel();
        void definirLimite();
};
    
#endif