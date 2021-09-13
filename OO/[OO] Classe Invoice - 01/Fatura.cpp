#include "Fatura.hpp"

Fatura::Fatura(){
    vlrFatura = 0;
}

void Fatura::getInvoiceAmount(){
    vlrFatura += precoProduto * qtdComprada;
}