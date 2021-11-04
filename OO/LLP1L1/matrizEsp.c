#include <stdio.h>
#define MAX_COLUNAS 10
#define MAX_LINHAS 10
#define CRITERIO_ESPARSA 70

int VerificarEsparsidade(int linhas, int colunas, int matrizRef[][MAX_COLUNAS]){
    int valorTotal = linhas * colunas;
    int porcentagem = (valorTotal * CRITERIO_ESPARSA)/100;
    int verificadorZeros = 0;
    int i, j;

    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            if(matrizRef[i][j] == 0){
                verificadorZeros++;
            }
        }
    }
    
    if(verificadorZeros > porcentagem){
        return 1;
    }else{
        return 0;
    }

}


int main(){
    int matriz[MAX_LINHAS][MAX_COLUNAS];
    int tLinhas, tColunas;
    int i, j;
    int nResultado;

    scanf("%d %d", &tLinhas, &tColunas);

    for(i = 0; i < tLinhas; i++){
        for(j = 0; j < tColunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    nResultado = VerificarEsparsidade(tLinhas, tColunas, matriz);

    if(nResultado == 1){
        puts("A matriz é esparsa");
    }else{
        puts("A matriz não é esparsa");
    }

    return 0;
}