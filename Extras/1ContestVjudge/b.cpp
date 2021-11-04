#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(){
    int nTestes;
    string resultadoScanner;
    int tS;

    cin >> nTestes;

    while(nTestes--){
        cin >> resultadoScanner;

        tS = resultadoScanner.size();

        if(resultadoScanner == "1" || resultadoScanner == "4" || resultadoScanner == "78"){
            cout << "+" << endl;
        }else if(resultadoScanner[tS-1] == '5' && resultadoScanner[tS-2] == '3'){
            cout << "-" << endl;
        }else if(resultadoScanner[0] == '9' && resultadoScanner[tS-1] == '4'){
            cout << "*" << endl;
        }else{
            cout << "?" << endl;
        }
    }
}