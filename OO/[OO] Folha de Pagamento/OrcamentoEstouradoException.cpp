#include "OrcamentoEstouradoException.hpp"
#include <iostream>

OrcamentoEstouradoException::OrcamentoEstouradoException(double total){
    //std::cout << "OrcamentoEstouradoException " << total << std::endl;
    valorCapturado = total;
}

std::string OrcamentoEstouradoException::getMessage(){
    char texto[50];
    sprintf(texto, "%.0lf", valorCapturado);
    
    return "OrcamentoEstouradoException " + std::string(texto) + "\n";
}