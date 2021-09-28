#include <iostream>
#include "Data3.hpp"
#include <string>

using namespace std;

int main(){
    Data recente;
    int diaLido, mesLido, anoLido;
    int qtdParaAvancar;

    cin >> diaLido;
    cin >> mesLido;
    cin >> anoLido;

    recente = Data(diaLido, mesLido, anoLido);

    cin >> qtdParaAvancar;
    cin.ignore();

    for(int i = 0; i < qtdParaAvancar; i++){
        recente.avancarDia();
    }

    recente.printData();

    return 0;
}
