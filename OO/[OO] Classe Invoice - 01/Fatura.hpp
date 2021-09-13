#ifndef FATURA_H
#define FATURA_H
#include <string>

class Fatura{
    public:
        Fatura();
        int codProduto;
        std::string descricao;
        int qtdComprada;
        double precoProduto;
        double vlrFatura;
        void getInvoiceAmount();
        
};


#endif