#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP
#include <string>


class Funcionario{
    protected:
        std::string nome;
        int nMatricula;

    public:
        Funcionario();

        std::string getNome();
        int getMatricula();

        void setNome(std::string nome);
        void setMatricula(int nMatricula);


        virtual double calcularSalario() = 0;
};

#endif 