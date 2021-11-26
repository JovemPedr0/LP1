#include <iostream>

using namespace std;

int main(){
    int vSalario = 0;
    float vEmprestimo = 0;
    int nPrestacoes = 0;
    float valorPrestacoes;
    double valorEmPorcentagem;

    while(vSalario <= 0){
        cin >> vSalario;
    }

    while(vEmprestimo <= 0){
        cin >> vEmprestimo;
    }

    while(nPrestacoes <= 0){
        cin >> nPrestacoes;
    }

    valorPrestacoes = vEmprestimo / nPrestacoes;
    valorEmPorcentagem = vEmprestimo * 0.3;
    
    if(valorEmPorcentagem < valorPrestacoes){
        cout << "Emprestimo nao pode ser concedido" << endl;
    }else{
        cout << "Emprestimo pode ser concedido" << endl;
    }

}