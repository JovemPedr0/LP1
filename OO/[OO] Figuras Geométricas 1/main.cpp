#include "Figura.hpp"
#include <iostream>

using namespace std;

int main(){
    Quadrado quadradoGenerico;
    Retangulo retanguloGenerico;
    Triangulo trianguloGenerico;
    Circulo circulogenerico;
    int tipoDeFigura;

    while (1){
        cin >> tipoDeFigura;
            if(tipoDeFigura == 0){
                break;
            }
        switch (tipoDeFigura){
        case 1:
            quadradoGenerico.lerAtributosArea();
            cout << "Quadrado de área " << quadradoGenerico.calcularArea() << endl;
            break;
        
        case 2:
            retanguloGenerico.lerAtributosArea();
            cout << "Retângulo de área " << retanguloGenerico.calcularArea() << endl;
            break;
        
        case 3:
            trianguloGenerico.lerAtributosArea();
            cout << "Triângulo de área " << trianguloGenerico.calcularArea() << endl;
            break;

        case 4:
            circulogenerico.lerAtributosArea();
            cout << "Círculo de área " << circulogenerico.calcularArea() << endl;
            break;
        }


    }
    


    return 0;
}