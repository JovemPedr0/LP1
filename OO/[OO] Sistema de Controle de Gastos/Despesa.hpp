#ifndef DESPESA_H
#define DESPESA_H
#include <string>
#define MAX_DESPESA 100

class Despesa{
    public:
        Despesa(); 
        void setNome(std::string nome);
        void setValor(double valor);
        void setTipoDeGasto(std::string tipoDeGasto);

        std::string getNome();
        double getValor();
        std::string getTipoDeGasto();

    private:
        std::string nome;
        double valor;
        std::string tipoDeGasto;
};

class Controle{
    public:
        Controle();
        void setDespesa(Despesa generica, int pos);
        Despesa getDespesa(int pos);
        float CalculaTotalDeDespesas();
        float CalculaTotalPorTipo(std::string tipo);
        bool existeDespesaDoTipo(std::string tipo);

    private:
        Despesa gastos[MAX_DESPESA];
};
    


#endif