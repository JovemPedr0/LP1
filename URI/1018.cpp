#include <iostream>
 
using namespace std;
 
int main() {
    int salarioIns;
    int notas100, notas50, notas20, notas10, notas5, notas2, notas1;
    int quantidade, resto;

    cin >> salarioIns;
    
    notas100 = salarioIns/100;
    resto = salarioIns % 100;

    salarioIns = resto;
    notas50 = salarioIns/50;
    resto = salarioIns % 50;

    salarioIns = resto;
    notas20 = salarioIns/20;
    resto = salarioIns % 20;

    salarioIns = resto;
    notas10 = salarioIns/10;
    resto = salarioIns % 10;

    salarioIns = resto;
    notas5 = salarioIns/5;
    resto = salarioIns % 5;

    salarioIns = resto;
    notas2 = salarioIns/2;
    resto = salarioIns % 2;

    salarioIns = resto;
    notas1 = salarioIns/1;
    resto = salarioIns % 1;

    cout << notas100 << " nota(s) de R$ 100,00" << endl;
    cout << notas50 << " nota(s) de R$ 50,00" << endl;
    cout << notas20 << " nota(s) de R$ 20,00" << endl;
    cout << notas10 << " nota(s) de R$ 10,00" << endl;
    cout << notas5 << " nota(s) de R$ 5,00" << endl;
    cout << notas2 << " nota(s) de R$ 2,00" << endl;
    cout << notas1 << " nota(s) de R$ 1,00" << endl;


 
    return 0;
}