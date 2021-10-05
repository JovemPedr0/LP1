#include "Agenda.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(){
    int nCasos;
    string nomeGenerico;
    string numeroDeTelefone;
    string nomeDaRua;
    string numeroResidencia;
    string nomeDoBairro;
    string nomeDaCidade;
    string nomeDoEstado;
    string nCEP;



    cin >> nCasos;
    cin.ignore();

    Pessoa cadastradas[nCasos];

    for (int i = 0; i < nCasos; i++){
        getline(cin, nomeGenerico);
        getline(cin, numeroDeTelefone);
        getline(cin, nomeDaRua);
        getline(cin, numeroResidencia);
        getline(cin, nomeDoBairro);
        getline(cin, nomeDaCidade);
        getline(cin, nomeDoEstado);
        getline(cin, nCEP);

        cadastradas[i] = Pessoa(nomeGenerico, Endereco(nomeDaRua, numeroResidencia, nomeDoBairro, nomeDaCidade, nomeDoEstado, nCEP), numeroDeTelefone);
        
    }
    
    for (int i = 0; i < nCasos; i++){
        cout << cadastradas[i].PessoaToString() << endl;
    }
    



    return 0;
}