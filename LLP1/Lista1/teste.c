#include <stdio.h>

void ExibeArrayBi(int a[][2], int dimensao1, int dimensao2){
    
    int i, j;

    /* Escreve o indice de cada coluna */
    for (i = 0; i < dimensao2; ++i){
        printf("\t%d", i);
    }
    for (i = 0; i < dimensao1; ++i){
        /* Escreve o indice de cada linha */
        printf("\n%d", i);

        for (j = 0; j < dimensao2; ++j){
            printf("\t%d", a[i][j]);
        }
        
    }

}

int main(){

    int ar[3][2] = {{1, 2}, {3, 4}, {5, 6}}; 

    ExibeArrayBi(ar, 3, 2);

    return 0;
}