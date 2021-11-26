#include <stdio.h>
#include <string.h>

typedef struct {
    int dia;
    int mes;
    int ano;
}tDataNascimento;

int ComparaIdades(tDataNascimento p1, tDataNascimento p2){
    if(p1.ano == p2.ano){
        if(p1.mes == p2.mes){
            if(p1.dia == p2.dia){
                return 0;
            }
        }
    }
    if(p1.ano > p2.ano){
        return -1;
    }
    else if(p1.ano < p2.ano){
        return 1;
    }
    if(p1.ano == p2.ano){
        if(p1.mes > p2.mes){
            return -1;
        }else{
            return 1;
        }
    }
    
}

int main(){
    tDataNascimento pessoa1;
    tDataNascimento pessoa2;
    int processadorIdades = 0;

    scanf("%d", &pessoa1.dia);
    scanf("%d", &pessoa1.mes);
    scanf("%d", &pessoa1.ano);

    scanf("%d", &pessoa2.dia);
    scanf("%d", &pessoa2.mes);
    scanf("%d", &pessoa2.ano);

    processadorIdades = ComparaIdades(pessoa1, pessoa2);

    if(processadorIdades == 1){
        printf("Pessoa 1 é mais velha\n");
    }
    if(processadorIdades == 0){
        printf("Pessoas são da mesma idade\n");
    }
    if(processadorIdades == -1){
        printf("Pessoa 2 é mais velha\n");
    }
    


    return 1;
}