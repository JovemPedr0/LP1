#include "Figura.hpp"
#include <iostream>

FiguraGeometrica::FiguraGeometrica(){
    nome = "-";
    tipo = 0;
}

FiguraGeometrica::FiguraGeometrica(int tipo){
    if(1 <= tipo && tipo <=4 ){
        this->tipo = tipo;
    }
    switch (tipo){
    case 1:
        nome = "Quadrado";
        break;
    
    case 2:
        nome = "Retângulo";
        break;
    
    case 3:
        nome = "Triângulo";
        break;
    
    case 4:
        nome = "Círculo";
        break;

    
    }
}
std::string FiguraGeometrica::getNome(){
    return nome;
}

Quadrado::Quadrado()
    : FiguraGeometrica(1)
{
    lado = 0;
}

double Quadrado::getLado(){
    return lado;
}

void Quadrado::setLado(double lado){
    this->lado = lado;
}

void Quadrado::lerAtributosArea(){
    double ladoGenerico;
        std::cin >> ladoGenerico;
            if(ladoGenerico > 0){
                setLado(ladoGenerico);
            }
}

float Quadrado::calcularArea(){
    return lado*lado;
}

Retangulo::Retangulo()
    : FiguraGeometrica(2)
{
    base = 0;
    altura = 0;
}

double Retangulo::getBase(){
    return base;
}

double Retangulo::getAltura(){
    return altura;
}

void Retangulo::setBase(double base){
    this->base = base;
}

void Retangulo::setAltura(double altura){
    this->altura = altura;
}

void Retangulo::lerAtributosArea(){
    double baseGenerica, alturaGenerica;
        std::cin >> baseGenerica;
            if(baseGenerica > 0){
                setBase(baseGenerica);
            }
        std::cin >> alturaGenerica;
            if(alturaGenerica > 0){
                setAltura(alturaGenerica);
            }
}

float Retangulo::calcularArea(){
    return base * altura;
}

Triangulo::Triangulo()
    :FiguraGeometrica(3)
{
    base = 0;
    altura = 0;
}

double Triangulo::getBase(){
    return base;
}

double Triangulo::getAltura(){
    return altura;
}

void Triangulo::setBase(double base){
    this->base = base;
}

void Triangulo::setAltura(double altura){
    this->altura = altura;
}

void Triangulo::lerAtributosArea(){
    double base, altura;
        std::cin >> base;
            if(base > 0){
                setBase(base);
            }
        std::cin >> altura;
            if(altura > 0){
                setAltura(altura);
            }
}

float Triangulo::calcularArea(){
    return (base*altura)/ 2;
}

Circulo::Circulo()
    :FiguraGeometrica(4)
{
    raio = 0;
}

double Circulo::getRaio(){
    return raio;
}

void Circulo::setRaio(double raio){
    this->raio = raio;
}

void Circulo::lerAtributosArea(){
    double raioGenerico;
        std::cin >> raioGenerico;
            if(raioGenerico > 0){
                setRaio(raioGenerico);
            }
}

float Circulo::calcularArea(){
    return PI * raio * raio;
}