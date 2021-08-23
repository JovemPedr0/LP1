#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int tempoGasto, velocidadeMedia;
    double distancia, motorCarro = 12.0;

    cin >> tempoGasto >> velocidadeMedia;
    distancia = velocidadeMedia * tempoGasto;

    cout << fixed << setprecision(3) << distancia / motorCarro << endl;

 
    return 0;
}