#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
    double pA, pB, pC;
    double delta = 0;
    double R1, R2;

    cin >> pA >> pB >> pC;

    delta = (pB * pB) - 4 * (pA) * (pC);
    
    if(delta < 0){
        cout << "Impossivel calcular";
    }else{
        R1 = (-pB + sqrt(delta)) / 2 * pA;
        cout << "R1 = " << fixed << setprecision(5) << R1 << endl;

        R2 = (-pB - sqrt(delta)) / 2 * pA;
        cout << "R2 = " << fixed << setprecision(5) << R2 << endl;
    }
    
    
    return 0;
}