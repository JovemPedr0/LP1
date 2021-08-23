#include <iostream>

using namespace std;

int main(){
    int valor1, valor2, valor3;
    int maior;

    cin >> valor1 >> valor2 >> valor3;

    if(valor1 > valor2){
        maior = valor1;
    }
    else if(valor1 < valor2){
        maior = valor2;
    }

    if (maior > valor3){
        cout << maior << " eh o maior" << endl;
    }
    else if(maior < valor3){
        cout << valor3 << " eh o maior" << endl;
    }



    return 0;
}