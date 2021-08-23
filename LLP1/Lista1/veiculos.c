#include <stdio.h>
#include <string.h>

typedef struct {
    char modelo[100];
    char marca[100];
    int anoProd;
    float preco;
}tDadosCarros;

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(){
    tDadosCarros veiculoA;
    tDadosCarros veiculoB;

    fgets(veiculoA.modelo, 100, stdin);
    RemoveBarraN(veiculoA.modelo);

    fgets(veiculoA.marca, 100, stdin);
    RemoveBarraN(veiculoA.marca);

    scanf("%d%*c", &veiculoA.anoProd);
    scanf("%f%*c", &veiculoA.preco);

    fgets(veiculoB.modelo, 100, stdin);
    RemoveBarraN(veiculoB.modelo);

    fgets(veiculoB.marca, 100, stdin);
    RemoveBarraN(veiculoB.marca);

    scanf("%d%*c", &veiculoB.anoProd);
    scanf("%f%*c", &veiculoB.preco);

    if(veiculoA.anoProd > veiculoB.anoProd){
        printf("%s %s\n", veiculoB.marca, veiculoB.modelo);
    }
    if(veiculoA.anoProd < veiculoB.anoProd){
        printf("%s %s\n", veiculoA.marca, veiculoA.modelo);
    }
    if(veiculoA.anoProd == veiculoB.anoProd){
        if(veiculoA.preco > veiculoB.preco){
            printf("%s %s\n", veiculoB.marca, veiculoB.modelo);
        }else{
            printf("%s %s\n", veiculoA.marca, veiculoA.modelo);
        }
    }
    return 1;
}