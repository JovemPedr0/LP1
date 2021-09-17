#include <iostream>
#include <string>
#include <string.h>
#include "Fatura2.hpp"

using namespace std;

int main(){
    Fatura client1 = Fatura();
    Fatura client2 = Fatura();

    int productCode;
    string productDescription;
    int quantifyPurchased;
    double productPrice;

    
    cin >> productCode;
    client1.setProductCode(productCode);
    getline(cin.ignore(), productDescription);
    client1.setProductDescription(productDescription);
    cin >> quantifyPurchased;
    client1.setQuantifyPurchased(quantifyPurchased);
    cin >> productPrice;
    client1.setProductPrice(productPrice);


    cin >> productCode;
    client2.setProductCode(productCode);
    getline(cin.ignore(), productDescription);
    client2.setProductDescription(productDescription);
    cin >> quantifyPurchased;
    client2.setQuantifyPurchased(quantifyPurchased);
    cin >> productPrice;
    client2.setProductPrice(productPrice);
    
    client1.printInvoice();
    client2.printInvoice();
    
    

    return 0;
}
