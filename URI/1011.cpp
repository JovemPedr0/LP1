#include <iostream>
#include <cmath>
#include <iomanip>

#define PI 3.14159
 
using namespace std;
 
int main() {
    double raioEsfera;
    double volume;

    cin >> raioEsfera;

    volume = (4.0 / 3.0) * PI * (raioEsfera * raioEsfera * raioEsfera);
    
    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;

    return 0;
}