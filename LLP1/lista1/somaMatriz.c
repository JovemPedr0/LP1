#include <stdio.h>

#define MAX_LINHAS 10
#define MAX_COLUNAS 10

void SomaMatrizes(int linhas, int colunas, int matrizA[][MAX_COLUNAS], int matrizB[][MAX_COLUNAS], int matrizResultante[][MAX_COLUNAS]){
    int i, j;
    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            matrizResultante[i][j] = matrizA[i][j] + matrizB[i][j];   
        }   
    }

    for (i = 0; i < linhas; i++){
        for(j = 0; j < colunas;j++){
            if(j == colunas -1){
                printf("%d\n", matrizResultante[i][j]);
            }else{
                printf("%d ", matrizResultante[i][j]);
            }  
        }
    } 
}

int main (){
    int linhas, colunas;
    int i, j;
    int matriz1[MAX_LINHAS][MAX_COLUNAS];
    int matriz2[MAX_LINHAS][MAX_COLUNAS];
    int matrizResultante[MAX_LINHAS][MAX_COLUNAS];

    scanf("%d %d", &linhas, &colunas);

    for(i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            scanf("%d", &matriz1[i][j]);
        }   
    }

    for(i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            scanf("%d", &matriz2[i][j]);
        }  
    }
    
    SomaMatrizes(linhas, colunas, matriz1, matriz2, matrizResultante);
   
    return 0;    
}