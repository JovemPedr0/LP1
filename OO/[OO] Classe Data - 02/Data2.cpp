#include "Data2.h"
#include <string>
#include <iostream>

using namespace std;

Data::Data(){
    dia = 1;
    mes = 1;
    ano = 1;
}

int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}

void Data::setDia(int novoDia){
    dia = novoDia;
}
void Data::setMes(int novoMes){
    mes = novoMes;
}
void Data::setAno(int novoAno){
    ano = novoAno;
}

void Data::printData(){
    cout << getDia() << " de " << getMesString() << " de " << getAno() << endl;
}

std::string Data::getMesString(){
    switch (mes){
        case 1:
            return "Janeiro";
        case 2:
            return "Fevereiro";
        case 3:
            return "Março";
        case 4:
            return "Abril";
        case 5:
            return "Maio";
        case 6:
            return "Junho";
        case 7:
            return "Julho";
        case 8:
            return "Agosto";
        case 9:
            return "Setembro";
        case 10:
            return "Outubro";
        case 11:
            return "Novembro";
        case 12:
            return "Dezembro";
        default:
            return "Indefinido";
    }
}