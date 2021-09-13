#ifndef PESSOA2_HPP
#define PESSOA2_HPP
#include <string>

using namespace std;

class Pessoa{
    public:
        Pessoa();
        Pessoa(string nomeLido, int idadeLida, string nTelefoneLido);
        string getNome();
        int getIdade();
        string getNumeroDeTelefone();

        void setNome(string nomeLido);
        void setIdade(int idadeLida);
        void setNumeroTelefone(string telefoneLido);

    private:
        std::string nome;
        int idade;
        std::string nTelefone;
};


#endif