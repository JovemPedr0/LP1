#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int codigoFuncionario, nHorasTrabalhadas;
    double valorPHora;

    cin >> codigoFuncionario >> nHorasTrabalhadas >> valorPHora;

    cout << "NUMBER = " << codigoFuncionario << endl; 
    cout << "SALARY = " << "U$ " << fixed << setprecision(2) << nHorasTrabalhadas * valorPHora << endl;    
 
    return 0;
}