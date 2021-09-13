#include <iostream>
#include <string>
#include <string.h>
#include "Fatura.hpp"

using namespace std;

int main(){
    Fatura n1;
    Fatura n2;

    cin >> n1.codProduto;
    getline(cin.ignore(), n1.descricao);
    cin >> n1.qtdComprada;
        if(n1.qtdComprada < 0){
            n1.qtdComprada = 0;
        }
    cin >> n1.precoProduto;
        if(n1.precoProduto < 0){
            n1.precoProduto = 0;
        }
    n1.getInvoiceAmount();

    cin >> n2.codProduto;
    getline(cin.ignore(), n2.descricao);
    cin >> n2.qtdComprada;
        if(n2.qtdComprada < 0){
            n2.qtdComprada = 0;
        }
    cin >> n2.precoProduto;
        if(n2.precoProduto < 0){
            n2.precoProduto = 0;
        }
    n2.getInvoiceAmount();

    cout << n1.codProduto << " - " << n1.descricao << " - " << n1.qtdComprada << " - " << n1.precoProduto << " - " << n1.vlrFatura << endl;
    cout << n2.codProduto << " - " << n2.descricao << " - " << n2.qtdComprada << " - " << n2.precoProduto << " - " << n2.vlrFatura << endl;

    

    return 0;
}
