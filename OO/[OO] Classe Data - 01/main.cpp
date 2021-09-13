#include <iostream>
#include "Data.h"
#include <string>

using namespace std;

int main(){
    Data recente;

    cin >> recente.dia;
    cin >> recente.mes;
    cin >> recente.ano;

    cout << recente.dia << "/" << recente.mes << "/" << recente.ano << endl; 

    return 0;
}
