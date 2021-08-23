#include <stdio.h>
#include <math.h>

typedef struct{
    float eixoX;
    float eixoY;
}tPontoCartesiano;

int main(){
    tPontoCartesiano A;
    tPontoCartesiano B;
    float distance, totalDistance;

    scanf("%f", &A.eixoX);
    scanf("%f", &A.eixoY);
    scanf("%f", &B.eixoX);
    scanf("%f", &B.eixoY);

    distance = sqrt((B.eixoX - A.eixoX) * (B.eixoX - A.eixoX) + (B.eixoY - A.eixoY) * (B.eixoY - A.eixoY));

    totalDistance = distance * distance;

    printf("%0.f\n", totalDistance);


    return 1;
}