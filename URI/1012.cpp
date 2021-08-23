#include <iostream>
#include <iomanip>

#define PI 3.14159
 
using namespace std;
 
int main() {
    double ladoA, ladoB, ladoC;

    cin >> ladoA >> ladoB >> ladoC;

    cout << "TRIANGULO: " << fixed << setprecision(3) << (ladoA*ladoC) / 2 << endl;

    cout << "CIRCULO: " << fixed << setprecision(3) << PI * (ladoC * ladoC) << endl;

    cout << "TRAPEZIO: " << fixed << setprecision(3) << ((ladoA + ladoB) * ladoC)/ 2 << endl;

    cout << "QUADRADO: " << fixed << setprecision (3) << ladoB*ladoB << endl;

    cout << "RETANGULO: " << fixed << setprecision(3) << ladoA * ladoB << endl;
 
    return 0;
}