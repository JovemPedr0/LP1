 #include "Livro.hpp"

Livro::Livro(std::string tituloDoLivro, int quantidadeDePaginas){
    this->tituloDoLivro = tituloDoLivro;
    this->quantidadeDePaginas = quantidadeDePaginas;
}

int Livro::getTotal(){
    return quantidadeDePaginas;
}

std::string Livro::toString(){
    //"<titulo>, paginas: <totalPaginas>"
    return tituloDoLivro + ", páginas: " + std::to_string(quantidadeDePaginas);
}