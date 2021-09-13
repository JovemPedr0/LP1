#include <iostream>
#include "Pessoa2.hpp"

using namespace std;

int main(){
    int nTestes;
    string nomeGenerico;
    int idadeGenerica;
    string nTelefoneGenerico;
    string nomePessoaProcurada;

    cin >> nTestes;
    cin.ignore();
    Pessoa FamososCadastrados[nTestes];


    for(int i = 0; i < nTestes; i++){
        getline(cin, nomeGenerico);
        cin >> idadeGenerica;
        cin.ignore();
        getline(cin, nTelefoneGenerico);
        FamososCadastrados[i] = Pessoa(nomeGenerico, idadeGenerica, nTelefoneGenerico);
    }

    getline(cin, nomePessoaProcurada);
    for(int i = 0; i < nTestes; i++){
       if(FamososCadastrados[i].getNome().find(nomePessoaProcurada) < FamososCadastrados[i].getNome().size()){
           cout << FamososCadastrados[i].getNome() << ", " << FamososCadastrados[i].getIdade() << ", " << FamososCadastrados[i].getNumeroDeTelefone() << endl;
       }else{
           cout << "Pessoa não encontrada" << endl;
       }
    }

    return 0;
}

