#include <iostream>
#include <string.h>

#define MAX_PESSOAS 50
#define MAX_SEXO 10

using namespace std;

typedef struct {
    double altura;
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
    double nMediaAltMulheres = 0;
    int nHomens = 0, nMulheres = 0;
    char str1[] = "masculino";
    char str2[] = "feminino";
    double menor = 9999;

    cin >> nPessoas;

    for (int i = 0; i < nPessoas; i++){
        cin >> cadastros[i].altura;
        cin >> cadastros[i].sexo;
        Trim(cadastros[i].sexo);
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
        if(menor > cadastros[i].altura){
            menor = cadastros[i].altura;
        }
        if(strcmp(str2, cadastros[i].sexo) == 0){
            nMediaAltMulheres += cadastros[i].altura;
        }
    }
    
    cout << "A menor altura é " << menor << " cm" << endl;
    cout << "A média da altura das mulheres é " << nMediaAltMulheres / nMulheres * 1.0 << endl;
    cout << "O número de homens é " << nHomens << endl;


    return 0;
}