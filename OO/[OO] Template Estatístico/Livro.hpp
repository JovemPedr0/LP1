#ifndef LIVRO_HPP
#define LIVRO_HPP

#include <string>

class Livro{
    private:
        std::string tituloDoLivro;
        int quantidadeDePaginas;

    public:
        Livro(std::string tituloDeLivro, int quantidadeDePaginas);

        int getTotal();

        std::string toString();
        
};



#endif