#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP
#include <string>

class Funcionario{
    public:
        Funcionario();
        Funcionario(std::string nome, std::string sobrenome, double vSalarioMensal);
        
        std::string getNome();
        std::string getSobrenome();
        double getSalarioMensal();
        double getSalarioAnual();

        void setNome(std::string nome);
        void setSobrenome(std::string sobrenome);
        void setSalarioMensal(double vSalarioMensal);

        double aumentaSalario(float percentual);

        void printFuncionario();

    private:
        std::string nome;
        std::string sobrenome;
        double vSalarioMensal;
        double vSalarioAnual;
};


#endif