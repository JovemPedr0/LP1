#include <stdio.h>
#include <string.h>

#define MAX_NOME 10
#define MAX_SOBRENOME 10
#define MAX_END 40
#define MAX_NMR 12
#define MAX_CADASTRO 50

typedef struct{
    int nCPF;
    char nome[MAX_NOME];
    char sobrenome[MAX_SOBRENOME];
    char endereco[MAX_END];
    char numeroTelefone[MAX_NMR];
}tPessoa;

tPessoa empregados[MAX_CADASTRO];
tPessoa empregadosLidos[MAX_CADASTRO];

int nEntradas = 0;
int qtdEmpregados = 0;

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

void SalvaArquivo(){
    FILE *arq;
    int i, d;

    arq = fopen("dados.csv", "w");
    if(arq == NULL){
        return;
    }
    //CPF,nome,snome,endereço,telefone
    for(i = 0; i < nEntradas; i++){
        fprintf(arq, "%d\n%s\n%s\n%s\n%s\n", empregados[i].nCPF, empregados[i].nome, empregados[i].sobrenome, empregados[i].endereco, empregados[i].numeroTelefone);
    }

    if(fclose(arq) == 0);
    
}

void ImprimeArquivo(){
    FILE *arq;
    char strAux[102];


    arq = fopen("dados.csv", "r");
    while(1){
        fscanf(arq, "%d%*c", &empregadosLidos[qtdEmpregados].nCPF);

        if(feof(arq)){
            break;
        }

        fgets(strAux, 102, arq);
        RemoveBarraN(strAux);
        strcpy(empregadosLidos[qtdEmpregados].nome, strAux);
        
        fgets(strAux, 102, arq);
        RemoveBarraN(strAux);
        strcpy(empregadosLidos[qtdEmpregados].sobrenome, strAux);
        
        fgets(strAux, 102, arq);
        RemoveBarraN(strAux);
        strcpy(empregadosLidos[qtdEmpregados].endereco, strAux);
        
        fgets(strAux, 102, arq);
        RemoveBarraN(strAux);
        strcpy(empregadosLidos[qtdEmpregados].numeroTelefone, strAux);

        qtdEmpregados++;
    }

    if(fclose(arq) == 0){
    
    }
    
    
} 

int main(){
    int i;

    scanf("%d", &nEntradas);

    for(i = 0; i < nEntradas; i++){
        scanf("%d%*c", &empregados[i].nCPF);

        fgets(empregados[i].nome, MAX_NOME, stdin);
        RemoveBarraN(empregados[i].nome);

        fgets(empregados[i].sobrenome, MAX_SOBRENOME, stdin);
        RemoveBarraN(empregados[i].sobrenome);

        fgets(empregados[i].endereco, MAX_END, stdin);
        RemoveBarraN(empregados[i].endereco);

        fgets(empregados[i].numeroTelefone, MAX_NMR, stdin);
        RemoveBarraN(empregados[i].numeroTelefone);
    }

    SalvaArquivo();
    ImprimeArquivo();

    printf("CPF,nome,snome,endereço,telefone\n");
    for(i = 0; i < nEntradas; i++){
        printf("%d,%s,%s,%s,%s\n", empregados[i].nCPF, empregados[i].nome, empregados[i].sobrenome, empregados[i].endereco, empregados[i].numeroTelefone);
    }
    

    return 0;
}