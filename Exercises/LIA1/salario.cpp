#include <iostream>

using namespace std;

int main(){
    int vSalarioMinBase = 1.045;
    int nSalarioDoEmpregado;
    int percentual, resto;

    cin >> nSalarioDoEmpregado;

    percentual = nSalarioDoEmpregado / 1045;
    resto = nSalarioDoEmpregado % 1045;

    cout << "O funcionário recebe aproximadamente " << percentual << " salário(s)" <<  endl;

    if(resto != 0){
        
    }

    return 0;
}