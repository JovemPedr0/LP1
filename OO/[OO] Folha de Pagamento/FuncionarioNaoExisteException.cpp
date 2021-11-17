#include "FuncionarioNaoExisteException.hpp"

FuncionarioNaoExisteException::FuncionarioNaoExisteException(std::string n){
    nomeErro = n;
}

std::string FuncionarioNaoExisteException::getMessage(){
    return "FuncionarioNaoExisteException " + nomeErro + "\n";
}