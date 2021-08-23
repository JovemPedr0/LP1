#include <stdio.h>
#include <string.h>

typedef struct {
    char descricao[50];
    float peso;
    char tipo;
}tMoveis;

tMoveis moveis[100];

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(){
    int nCasos, i, encontreiReal = 0;
    int encontreiSPesado = 0;
    float movelMaisPesado = 0;
    char encontreiMaisPesado[100];
    char criterio[12] = "Real";
    char *busca = NULL;

    scanf("%d", &nCasos);

    for(i = 0; i <= nCasos; i++){
        fgets(moveis[i].descricao, 100, stdin);
        RemoveBarraN(moveis[i].descricao);
        scanf("%f%*c", &moveis[i].peso);
        scanf("%c%*c", &moveis[i].tipo);
    }

    for(i = 0; i <= nCasos; i++){
        busca = strstr(moveis[i].descricao, criterio);
        if(busca != NULL){
            encontreiReal++;
        }   
    }
    for(i = 0; i <= nCasos; i++){
        if(moveis[i].tipo == 's'){
            if(moveis[i].peso > 10){
                encontreiSPesado++;
            }
        }
    }
    for(i = 0; i <= nCasos; i++){
        if(movelMaisPesado < moveis[i].peso){
            movelMaisPesado = moveis[i].peso;
            strcpy(encontreiMaisPesado, moveis[i].descricao);
        }
    }
    
    printf("Tipo 's' acima de 10Kg: %d\n", encontreiSPesado);
    printf("Termina em  \"Real\": %d\n", encontreiReal);
    printf("Mais pesado: \"%s\"\n", encontreiMaisPesado);


    return 1;
}