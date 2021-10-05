#ifndef AGENDA_H
#define AGENDA_H
#include <string>

class Endereco{
    private:
        std::string nomeDaRua;
        std::string numeroResidencia;
        std::string nomeDoBairro;
        std::string nomeDaCidade;
        std::string nomeDoEstado;
        std::string nCEP;

    public:
        //construtores
        Endereco();
        Endereco(std::string nomeDaRua, std::string numeroResidencia, std::string nomeDoBairro, std::string nomeDaCidade, std::string nomeDoEstado, std::string nCEP);
        
        //get's
        std::string getRua();
        std::string getNumero();
        std::string getBairro();
        std::string getCidade();
        std::string getEstado();
        std::string getCEP();

        
        //set's
        void setRua(std::string nomeDaRua);
        void setNumero(std::string numeroResidencia);
        void setBairro(std::string nomeDoBairro);     
        void setCidade(std::string nomeDaCidade);
        void setEstado(std::string nomeDoEstado);
        void setCEP(std::string nCEP); 

        std::string EnderecotoString();
};

class Pessoa{
    private:
        std::string nome;
        Endereco pessoal;
        std::string numeroDeTelefone;

    public:
        Pessoa();
        Pessoa(std::string nome);
        Pessoa(std::string nome, Endereco pessoal, std::string numeroDeTelefone);
        std::string PessoaToString();
};



#endif