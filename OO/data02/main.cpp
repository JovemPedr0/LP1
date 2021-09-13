#include <iostream>
#include "Data2.h"
#include <string>

using namespace std;

int main(){
    Data recente;
    int diaLido, mesLido, anoLido;

    cin >> diaLido;
    cin >> mesLido;
    cin >> anoLido;

    recente.setDia(diaLido);
    recente.setMes(mesLido);
    recente.setAno(anoLido);

    recente.printData();

    return 0;
}
