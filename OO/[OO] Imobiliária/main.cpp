#include "Imoveis.hpp"
#include <iostream>

using namespace std;

int main(){
    int nImoveisCadastrados;
    int nOpcao;

    Casa casaCadastrada;
    Apartamento apartamentoCadastrado;
    Terreno terrenoCadastrado;

    cin >> nImoveisCadastrados;

    while (nImoveisCadastrados--){
        cin >> nOpcao;
        
        switch (nOpcao){
            case 0:
                cout << "Indefinido" << endl;
                break;
            
            case 1:
                casaCadastrada.lerAtributos();
                casaCadastrada.exibeAtributos();
                break;
            
            case 2:
                apartamentoCadastrado.lerAtributos();
                apartamentoCadastrado.exibeAtributos();
                break;
            
            case 3:
                terrenoCadastrado.lerAtributos();
                terrenoCadastrado.exibeAtributos();
                break;
        }
    }
    
    return 0;
}