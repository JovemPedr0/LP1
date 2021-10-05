#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>


class Trabalhador{
    protected:
        std::string nome;
        double salario;

    public:
        Trabalhador();
        
        std::string getNome();
        double getSalario();

        void setNome(std::string nomeRecebido);
        void setSalario(double salarioRecebido);
};

class TrabalhadorAssalariado: public Trabalhador{
    public:
        TrabalhadorAssalariado(double salario);
        float calcularPagamentoSemanal();
};

class TrabalhadorPorHora: public Trabalhador{
    private:
        float valorDaHora;

    public:
        TrabalhadorPorHora(float valor);
        float calcularPagamentoSemanal(int horasSemanais);
};

#endif