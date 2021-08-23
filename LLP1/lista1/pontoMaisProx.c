#include <stdio.h>
#include <math.h>

typedef struct {
    int coordX;
    int coordY;
}tPontoGen;

double CalculaDistancia(tPontoGen coordenada1, tPontoGen coordenada2){
    return sqrt((coordenada1.coordX - coordenada2.coordX)*(coordenada1.coordX - coordenada2.coordX) + (coordenada1.coordY - coordenada2.coordY)*(coordenada1.coordY - coordenada2.coordY));
}


int main(){
    tPontoGen pontoPrincipal;
    int nPontos, i;
    double distanciaCalcuda;
    double menorDistancia = 999999;
    int menorIndice;

    scanf("%d", &pontoPrincipal.coordX);
    scanf("%d", &pontoPrincipal.coordY);

    scanf("%d", &nPontos);

    tPontoGen array[nPontos];

    for (i = 0; i < nPontos; i++){
        scanf("%d", &array[i].coordX);
        scanf("%d", &array[i].coordY);

        distanciaCalcuda = CalculaDistancia(pontoPrincipal, array[i]);
        if(distanciaCalcuda < menorDistancia){
            menorDistancia = distanciaCalcuda;
            menorIndice = i;
        }
    }
    
    printf("Ponto mais perto é (%d, %d)\n", array[menorIndice].coordX, array[menorIndice].coordY);
    
    return 0;
}