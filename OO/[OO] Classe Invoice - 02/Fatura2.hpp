#ifndef FATURA2_H
#define FATURA2_H
#include <string>

class Fatura{
    public:
        Fatura();
        double getInvoiceAmount();
        int getProductCode();
        double getProductPrice();
        std::string getProductDescription();
        int getQuantifyPurchased();

        void setProductCode(int productCode);
        void setProductPrice(double productPrice);
        void setProductDescription(std::string productDescription);
        void setQuantifyPurchased(int quantifyPurchased);

        void printInvoice();

    private:
        int productCode;
        std::string productDescription;
        int quantifyPurchased;
        double productPrice;
        double invoiceValue;
   
};


#endif