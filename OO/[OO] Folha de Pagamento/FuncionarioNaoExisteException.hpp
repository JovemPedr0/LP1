#ifndef FUNCIONARIONAOEXISTEEXCEPTION_HPP
#define FUNCIONARIONAOEXISTEEXCEPTION_HPP
#include <exception>
#include <string>
#include <iostream>

class FuncionarioNaoExisteException: public std::exception{
    private:
        std::string nomeErro;

    public:
        FuncionarioNaoExisteException(std::string n);
        std::string getMessage();
        
};

#endif
