#include "Figura.hpp"
#include <iostream>

using namespace std;

int main(){
    FiguraGeometrica *figura;
    int tipoDeFigura;

    do{
        cin >> tipoDeFigura;
        switch (tipoDeFigura){
        case 1:
            figura = new Quadrado();
            break;
        
        case 2:
            figura = new Retangulo();
            break;

        case 3:
            figura = new Triangulo();
            break;

        case 4:
            figura = new Circulo();
            break;
        }

        if(figura != NULL){
            figura->lerAtributosArea();
            cout << figura->getNome() << " polimórfico de área " << figura->calcularArea() << endl;

            delete figura;
            figura = NULL;
        }
       
    } while (tipoDeFigura != 0);
    
    


    return 0;
}