#ifndef ORCAMENTOESTOURADOEXCEPTION_HPP
#define ORCAMENTOESTOURADOEXCEPTION_HPP
#include <string>
#include <exception>

class OrcamentoEstouradoException: public std::exception{
    private:
        double valorCapturado;

    public:
        OrcamentoEstouradoException(double total);
        std::string getMessage();
};


#endif