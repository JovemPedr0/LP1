#include <stdio.h>
#include <string.h>

#define MAX_NOME 100
#define MAX_CANDIDATOS 10

typedef struct {
    char nomeCandidato[MAX_NOME];
    int nCodVoto;
    int nQtdVotos;
    float nPorcetagemVotos;
}tCandidatos;

tCandidatos candidato[MAX_CANDIDATOS];

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(){
    int nCasos, i, j = 0;
    int votacao, nVotosNulos = 0;
    int nVotosDirecionados = 0;
    int nTotalDeVotos;
    int contador = 0;
    int maior = 0;
    float nPorcetagemNulos;


    scanf("%d", &nCasos);

    for(i = 0; i < nCasos; i++){
        scanf("%d%*c", &candidato[i].nCodVoto);
        fgets(candidato[i].nomeCandidato, MAX_NOME, stdin);
        RemoveBarraN(candidato[i].nomeCandidato);
    }

    for (i = 0; i < nCasos; i++){
        candidato[i].nQtdVotos = 0;
    }
    

    while (1){

        scanf("%d", &votacao);
        contador = 0;
        if(votacao <= 0){
            break;
        }else{
            for (i = 0; i < nCasos; i++){
                if(votacao == candidato[i].nCodVoto){
                    candidato[i].nQtdVotos++;
                }else if(votacao != candidato[i].nCodVoto && votacao > 0){
                    contador++;
                }
            }
            if(contador == nCasos) {
                nVotosNulos++;
            }   
        }
    }
    

    for (i = 0; i < nCasos; i++){
        nVotosDirecionados += candidato[i].nQtdVotos;
    }

    nTotalDeVotos = nVotosDirecionados + nVotosNulos;

    for (i = 0; i < nCasos; i++){
        candidato[i].nPorcetagemVotos = (candidato[i].nQtdVotos * 100)* 1.0/nTotalDeVotos*1.0;
    }
    for (i = 0; i < nCasos; i++){
        if(maior < candidato[i].nQtdVotos){
            maior = candidato[i].nQtdVotos;
        }
    }
    
    for (i = 0; i < nCasos; i++){
        printf("%.2f - %d - %s ", candidato[i].nPorcetagemVotos, candidato[i].nCodVoto, candidato[i].nomeCandidato);
        if(candidato[i].nQtdVotos >= maior){
            printf("VENCEDOR\n");
        }else{
            puts(" ");
        }
    }
    
    nPorcetagemNulos = (nVotosNulos * 100)*1.0/nTotalDeVotos*1.0;

    printf("%.2f - Nulos\n", nPorcetagemNulos);  

    return 0;
}