#include <iostream>
#include <iomanip>

#define PESO_A 2
#define PESO_B 3
#define PESO_C 5
#define PESO_TOTAL 10

using namespace std;
 
int main() {
    double primeiraNota, segundaNota, terceiraNota;
    double media;

    cin >> primeiraNota >> segundaNota >> terceiraNota;

    media = ((primeiraNota * PESO_A) + (segundaNota * PESO_B) + (terceiraNota * PESO_C)) / PESO_TOTAL;

    cout << "MEDIA = " << fixed << setprecision(1) << media << endl;
    
 
    return 0;
}