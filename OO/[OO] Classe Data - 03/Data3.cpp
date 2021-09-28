#include "Data3.hpp"
#include <string>
#include <iostream>

using namespace std;

Data::Data(){
    dia = 1;
    mes = 1;
    ano = 1;
}

Data::Data(int dia, int mes, int ano){
    setMes(mes);
    setDia(dia);
    this->ano = ano;
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

void Data::setDia(int dia){
    if(1 <= dia && dia <= getDaysMonth(mes)){
        this->dia = dia;
    }else{
        cout << "Atributo dia Inválido" << endl;
        this->dia = 1;
    }
}
void Data::setMes(int mes){
    if(1 <= mes && mes <= 12){
        this->mes = mes;
    }else{
        cout << "Atributo mês Inválido" << endl;
        this->mes = 1;
    }
}
void Data::setAno(int novoAno){
    ano = novoAno;
}

void Data::avancarDia(){
    dia++;
    if (dia > getDaysMonth(mes)){
        mes++;
        dia = 1;
    }
    if (mes > 12){
        ano++;
        mes = 1;
    }
    
    /* if (dia < getDaysMonth(mes)){
        dia++;
    }else if(dia == getDaysMonth(mes)){
        mes++;
        dia = 1;
    }else if(getMes() >= 13){
        ano++;
        dia = 1;
        mes = 1;
    } */
}

int Data::getDaysMonth(int mes){
    switch (mes){
    case 1:
        return 31;
    
    case 2:
        return 28;

    case 3:
        return 31;
    
    case 4:
        return 30;

    case 5:
        return 31;
    
    case 6:
        return 30;

    case 7:
        return 31;
    
    case 8:
        return 31;

    case 9:
        return 30;

    case 10:
        return 31;

    case 11:
        return 30;

    case 12:
        return 31;

    default:
        return 0;
    }
}

void Data::printData(){
    if (getDia() < 10){
        if(getMes() < 10){
            cout << "0" << getDia() << "/" << "0" << getMes() << "/" << getAno() << endl;
        }else{
            cout << "0" << getDia() << "/" << getMes() << "/" << getAno() << endl;
        }
    }else if(getDia() >= 10){
        if (getMes() < 10){
            cout << getDia() << "/" << "0" << getMes() << "/" << getAno() << endl;
        }else{
            cout << getDia() << "/" << getMes() << "/" << getAno() << endl;
        }  
    }
}