#include <iostream>
#include "Pessoa.hpp"

using namespace std;

int main(){
    Pessoa cadastro1;
    Pessoa cadastro2;

    getline(cin, cadastro1.nome);
    cin >> cadastro1.idade;
    getline(cin.ignore(), cadastro1.nTelefone);

    getline(cin, cadastro2.nome);
    cin >> cadastro2.idade;
    getline(cin.ignore(), cadastro2.nTelefone);

    
    cout << cadastro1.nome << ", " << cadastro1.idade << ", " << cadastro1.nTelefone << endl;
    cout << cadastro2.nome << ", " << cadastro2.idade << ", " << cadastro2.nTelefone << endl;



    return 0;
}

