#include <iostream>
#include <iomanip>

#define PESO_A 3.5
#define PESO_B 7.5
#define SOMA_DOS_PESOS 11

using namespace std;
 
int main() {
    double primeiraNota, segundaNota;
    double media;

    cin >> primeiraNota >> segundaNota;

    media = ((primeiraNota * PESO_A) + (segundaNota * PESO_B))/11;

    cout << "MEDIA = " << fixed << setprecision(5) << media << endl;

    return 0;
}