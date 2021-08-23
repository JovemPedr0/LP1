#include <iostream>
#include <iomanip>

#define BONUS_POR_VENDA 15/100
using namespace std;
 
int main() {
    char nomeFuncionario[41];
    double salarioFixo, totalVendasMes;
    double bonus;

    cin >> nomeFuncionario >> salarioFixo >> totalVendasMes;

    bonus = totalVendasMes * BONUS_POR_VENDA;

    cout << "TOTAL = " << "R$ " << fixed << setprecision(2) << salarioFixo + bonus << endl;

    return 0;
}