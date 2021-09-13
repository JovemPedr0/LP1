#ifndef DATA2_H
#define DATA2_H
#include <string>

class Data{
    public:
        Data();
        int getDia();
        int getMes();
        int getAno();
        std::string getMesString();
    
        void setDia(int novoDia);
        void setMes(int novoMes);
        void setAno(int novoAno);

        void printData();

    private:
        int dia;
        int mes;
        int ano;

};

#endif