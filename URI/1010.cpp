#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int codigoProduto, qtdProduto;
    double precoProduto;
    double total;
    int compras = 2;

    while(compras--){
        cin >> codigoProduto >> qtdProduto >> precoProduto;
        total += qtdProduto * precoProduto;
    }

    cout << "VALOR A PAGAR: " << "R$ " << fixed << setprecision(2) << total << endl;
 
    return 0;
}