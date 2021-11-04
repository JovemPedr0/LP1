#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[100];
    int idade;
    int nChutes;
    int nGols;
}tDadosJogadores;

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(){
    tDadosJogadores jogador1;
    tDadosJogadores jogador2;
    double mediaA, mediaB;

    fgets(jogador1.nome, 100, stdin);
    RemoveBarraN(jogador1.nome);

    scanf("%d%*c", &jogador1.idade);
    scanf("%d%*c", &jogador1.nChutes);
    scanf("%d%*c", &jogador1.nGols);
    mediaA = (jogador1.nGols / (jogador1.nChutes * 1.0));

    fgets(jogador2.nome, 100, stdin);
    RemoveBarraN(jogador2.nome);

    scanf("%d%*c", &jogador2.idade);
    scanf("%d%*c", &jogador2.nChutes);
    scanf("%d%*c", &jogador2.nGols);
    mediaB = (jogador2.nGols / (jogador2.nChutes * 1.0));

    
    if(mediaA > mediaB){
        printf("%s (%d)\n", jogador1.nome, jogador1.idade);
    }else{
        printf("%s (%d)\n", jogador2.nome, jogador2.idade);
    }
    return 1;
}
