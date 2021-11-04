#include <iostream>

using namespace std;

int main(){
    int nCasos;
    cin >> nCasos;

    int vet[nCasos];

    for (int i = 0; i < nCasos; i++){
        cin >> vet[i];
    }

    for (int i = 0; i < nCasos-1; i++){
        for (int j = nCasos-1; j > 0; j--){
            if(i != j){
                if(vet[j] == vet[i]){
                    vet[j] = 0;
                }
            }    
        }
    }
    
    for (int i = 0; i < nCasos; i++){
        if(vet[i] != 0){
            if(i == nCasos-1){
                cout << vet[i] << endl;
            }else{
                cout << vet[i] << " ";
            }
            
        }
    }

    return 0;
}