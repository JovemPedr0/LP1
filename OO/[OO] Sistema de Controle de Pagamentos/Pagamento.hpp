#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>
#define MAX_PAGAMENTOS 100

class Pagamento{
    private:
        double valorPagamento;
        std::string nomeDoFuncionario;

    public:
        Pagamento();//construtor

        //gets
        double getValorPagamento();
        std::string getNomeDoFuncionario();

        //sets
        void setValorPagamento(double valorPagamento);
        void setNomeDoFuncionario(std::string nomeDoFuncionario);
};

class ControleDePagamentos{
    private:
        Pagamento controleTotal[MAX_PAGAMENTOS];

    public:
        ControleDePagamentos();
        void setPagamento(Pagamento generic, int indice);
        Pagamento getPagamento(int pos);
        float CalculaTotalDePagamentos();
        int getIndexFuncionario(std::string nomeDoFuncionario);

};


#endif