#include "Imoveis.hpp"
#include <iostream>

using namespace std;

int main(){
    int nImoveisCadastrados;
    int nOpcao;
    Imovel *imovel;
    Imobiliaria imobiliaria;
    string imovelBuscado;

    cin >> nImoveisCadastrados;

    for(int i = 0; i < nImoveisCadastrados; i++){
        cin >> nOpcao;
        
        switch (nOpcao){
            
            case 1:
                imovel = new Casa;
                break;
            
            case 2:
                imovel = new Apartamento;
                break;
            
            case 3:
                imovel = new Terreno;
                break;
        }

        imovel->lerAtributos();
        imobiliaria.adicionaImovel(imovel);
    }

    getline(cin.ignore(), imovelBuscado);
    imobiliaria.buscaImovel(imovelBuscado);
    
    return 0;
}