#include <iostream>
#include <string.h>

#define MAX_PESSOAS 2000
#define MAX_RESPOSTA 3
#define MAX_SEXO 10

using namespace std;

typedef struct {
    char resposta[MAX_RESPOSTA];
    char sexo[MAX_SEXO];
}tPessoas;

tPessoas cadastros[MAX_PESSOAS];

void Trim(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(){
    int nPessoas;
    int nHomens = 0, nMulheres = 0;
    int nS = 0, nN = 0;
    char str1[] = "masculino";
    char str2[] = "feminino";
    char strS[] = "sim";
    char strN[] = "nao";

    cin >> nPessoas;

    for (int i = 0; i < nPessoas; i++){
        cin >> cadastros[i].resposta;
        cin >> cadastros[i].sexo;
    }

    for (int i = 0; i < nPessoas; i++){
        cout << cadastros[i].resposta << endl;
        cout << cadastros[i].sexo << endl;
    }
    

    for (int i = 0; i < nPessoas; i++){
        if(strcmp(str1, cadastros[i].sexo) == 0){
            nHomens++;
        }
        if(strcmp(str2, cadastros[i].sexo) == 0){
            nMulheres++;
        }
    }

    for (int i = 0; i < nPessoas; i++){
        if(strcmp(strS, cadastros[i].resposta) == 0){
            nS++;
        }
        if(strcmp(strN, cadastros[i].resposta) == 0){
            nN++;
        }
    }
    

    
    
    cout << "Quantidade de sim(s) " << nS << endl;
    cout << "Quantidade de não(s) " << nN << endl;
    cout << ((nHomens/nPessoas)*100.0) << " de homens" << endl;
    cout << ((nMulheres/nPessoas)*100.0) << " de mulheres" << endl;



    return 0;
}