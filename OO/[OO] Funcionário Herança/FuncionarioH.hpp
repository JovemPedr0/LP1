#ifndef FUNCIONARIOH_HPP
#define FUNCIONARIOH_HPP
#include <string>

class FuncionarioH{
    protected:
        int nMatricula;
        std::string nome;
        float valorDoSalario;
        

    public:
        FuncionarioH();
        
        int getMatricula();
        std::string getNome();
        float getSalario();

        void setMatricula(int nMatricula);
        void setNome(std::string nome);
        void setSalario(float valorDoSalario);
};

class Consultor: public FuncionarioH{
    public:
        float getSalario();
        float getSalario(float percentual);
};

#endif //FUNCIONARIOH_HPP