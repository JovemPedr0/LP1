#include "Estatistica.hpp"
#include "Livro.hpp"
#include "Pedido.hpp"
#include <iostream>

using namespace std;

int main(){
    Estatistica<Livro> saraiva;
    Estatistica<Pedido> conta;

    vector<Livro> nLivros;
    vector<Pedido> nPedidos;

    int nCasosPedidos;
    double valorUnitario;
    int quantidade;

    int nCasosLivros;
    string tituloDoLivro;
    int quantidadeDePaginas;

    cin >> nCasosPedidos;

    for(int i = 0; i < nCasosPedidos; i++){
        cin >> valorUnitario >> quantidade;
        nPedidos.push_back(Pedido(valorUnitario, quantidade));
    }  

    cin >> nCasosLivros;

    for (int i = 0; i < nCasosLivros; i++){
        cin.ignore();
        getline(cin, tituloDoLivro);
        cin >> quantidadeDePaginas;

        nLivros.push_back(Livro(tituloDoLivro, quantidadeDePaginas));
    }
    
    int index;

    index = conta.indexOfMaior(nPedidos);
    cout << "Maior: " << nPedidos[index].toString() << endl;

    index = conta.indexOfMenor(nPedidos);
    cout << "Menor: " << nPedidos[index].toString() << endl;

    cout << "Média: " << conta.media(nPedidos) << endl;

    index = saraiva.indexOfMaior(nLivros);
    cout << "Maior: " << nLivros[index].toString() << endl;

    index = saraiva.indexOfMenor(nLivros);
    cout << "Menor: " << nLivros[index].toString() << endl;

    cout << "Média: " << saraiva.media(nLivros) << endl;



    return 0;
}