#include <iostream>
#include <iomanip>

#define PI 3.14159
 
using namespace std;
 
int main() {
    double tRaio;
    double vArea = 0;

    cin >> tRaio;
    vArea = PI * (tRaio * tRaio);
    cout << "A=" << fixed << setprecision(4) << vArea << endl;
 
    return 0;
}
