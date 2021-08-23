#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double nKmPercorrido;
    double nCombustivelGasto;

    cin >> nKmPercorrido >> nCombustivelGasto;
    
    cout << fixed << setprecision (3) << nKmPercorrido / nCombustivelGasto << " km/l" << endl;
 
    return 0;
}