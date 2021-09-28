#ifndef DATA3_H
#define DATA3_H
#include <string>

class Data{
    public:
        Data();
        Data(int dia, int mes, int ano);
        int getDia();
        int getMes();
        int getAno();
    
        void setDia(int novoDia);
        void setMes(int novoMes);
        void setAno(int novoAno);

        void avancarDia();
        int getDaysMonth(int mes);

        void printData();

    private:
        int dia;
        int mes;
        int ano;

};

#endif