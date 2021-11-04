#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(){
    string correta("Hello,World!");
    string lida;
    
    getline(cin, lida);
    if(lida == correta){
        cout << "AC" << endl;
    }
    if(lida != correta){
        cout << "WA" << endl;
    }
    
}