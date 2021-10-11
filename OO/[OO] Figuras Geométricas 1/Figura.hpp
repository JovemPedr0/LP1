#ifndef FIGURA_H
#define FIGURA_H
#include <string>
#define PI 3.14

class FiguraGeometrica{
    protected:
        std::string nome;
        int tipo;
        
    public:
        FiguraGeometrica();
        FiguraGeometrica(int tipo);

        float calcularArea();
        void lerAtributosArea();
        std::string getNome();
   
};

class Quadrado: public FiguraGeometrica{
    private:
        double lado;

    public:
        Quadrado();

        double getLado();

        void setLado(double lado);

        void lerAtributosArea();
        float calcularArea();

};

class Retangulo: public FiguraGeometrica{
    private:
        double base;
        double altura;

    public:
        Retangulo();

        double getBase();
        double getAltura();

        void setBase(double base);
        void setAltura(double altura);

        void lerAtributosArea();
        float calcularArea();
};


class Triangulo: public FiguraGeometrica{
    private:
        double base;
        double altura;

    public:
        Triangulo();

        double getBase();
        double getAltura();

        void setBase(double base);
        void setAltura(double altura);

        void lerAtributosArea();
        float calcularArea();
};

class Circulo: public FiguraGeometrica{
    private:
        double raio;

    public:
        Circulo();

        double getRaio();

        void setRaio(double raio);

        void lerAtributosArea();
        float calcularArea();
};

#endif