#include "Fatura2.hpp"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

Fatura::Fatura(){
    invoiceValue = 0;
    productCode = 0;
    productDescription = "-";
    quantifyPurchased = 0;
    productPrice = 0;
}

double Fatura::getInvoiceAmount(){
    invoiceValue += quantifyPurchased * productPrice;
    return invoiceValue;
}

int Fatura::getProductCode(){
    return productCode;
}

double Fatura::getProductPrice(){
    return productPrice;
}

string Fatura::getProductDescription(){
    return productDescription;
}

int Fatura::getQuantifyPurchased(){
    return quantifyPurchased;
}

void Fatura::setProductCode(int productCode){
    this->productCode = productCode;
}

void Fatura::setProductPrice(double productPrice){
    if(productPrice >= 0){
        this->productPrice = productPrice;
    }if(productPrice < 0){
        this->productPrice = 0;
    }
}

void Fatura::setProductDescription(string productDescription){
    this->productDescription = productDescription;
}

void Fatura::setQuantifyPurchased(int quantifyPurchased){
    if(quantifyPurchased >= 0){
        this->quantifyPurchased = quantifyPurchased;
    }else{
        this->quantifyPurchased = 0;
    }
}

void Fatura::printInvoice(){
    cout << getProductCode() << " - " << getProductDescription() << " - " << getQuantifyPurchased() << " - " << getProductPrice() << " - " << getInvoiceAmount() << endl;
}