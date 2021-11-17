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
        
        if(tS > 10){
            cout << resultadoScanner[0] << tS-2 << resultadoScanner[tS-1] << endl;
        }else{
            cout << resultadoScanner << endl;
        }
    }
}