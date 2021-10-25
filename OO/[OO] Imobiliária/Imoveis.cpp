#include "Imoveis.hpp"
#include <iostream>

Imovel::Imovel(){
    nomeImovel = "-";
    valorImovel = 0;
    disponibilidadeImovel = "-";
}

Imovel::Imovel(int tipoImovel){
    if(1 <= tipoImovel && tipoImovel <= 3){
        this->tipoImovel = tipoImovel;
    }
    switch (tipoImovel){
    case 1:
        nomeImovel = "Casa";
        break;
    
    case 2:
        nomeImovel = "Apartamento";
        break;
    
    case 3:
        nomeImovel = "Terreno";
        break;
    }
}

std::string Imovel::getNomeImovel(){
    return nomeImovel;
}

double Imovel::getValorImovel(){
    return valorImovel;
}

std::string Imovel::getCondicaoImovel(){
    return disponibilidadeImovel;
}

void Imovel::setNomeImovel(std::string nomeImovel){
    this->nomeImovel = nomeImovel;
}

void Imovel::setValorImovel(double valorImovel){
    this->valorImovel = valorImovel;
}

void Imovel::setCondicaoImovel(std::string disponibilidadeImovel){
    this->disponibilidadeImovel = disponibilidadeImovel;
}

Casa::Casa()
    :Imovel(1)
{
    numeroDePavimentos = 0;
    numeroDeQuartos = 0;
    areaDoTerreno = 0;
    areaConstruida = 0;
}

double Casa::getPavimentos(){
    return numeroDePavimentos;
}

int Casa::getQuartos(){
    return numeroDeQuartos;
}

double Casa::getAreaGeral(){
    return areaDoTerreno;
}

double Casa::getAreaConstruida(){
    return areaConstruida;
}

void Casa::setEspecificacoesCasa(double numeroDePavimentos, int numeroDeQuartos, double areaDoTerreno , double areaConstruida){
    this->numeroDePavimentos = numeroDePavimentos;
    this->numeroDeQuartos = numeroDeQuartos;
    this->areaDoTerreno = areaDoTerreno;
    this-> areaConstruida = areaConstruida;
}

void Casa::lerAtributos(){
    double numeroDePavimentosGenerico, areaDoTerrenoGenerica, areaConstruidaGenerica, valorGenerico;
    int numeroDeQuartosGenerico;
    std::string disponibilidadeImovel;

    std::cin >> valorGenerico;
    std::cin.ignore();
    Casa::setValorImovel(valorGenerico);

    getline(std::cin, disponibilidadeImovel);
    Casa::setCondicaoImovel(disponibilidadeImovel);

    std::cin >> numeroDePavimentosGenerico;
    std::cin >> numeroDeQuartosGenerico;
    std::cin >> areaDoTerrenoGenerica;
    std::cin >> areaConstruidaGenerica;
    Casa::setEspecificacoesCasa(numeroDePavimentosGenerico, numeroDeQuartosGenerico,  areaDoTerrenoGenerica,  areaConstruidaGenerica);
}
    //Casa para venda. 2 pavimentos, 5 quartos, 310m2 de área de terreno e 155m2 de área construída. R$ 600000.

void Casa::exibeAtributos(){
    std::cout << getNomeImovel() << " para " << getCondicaoImovel() << ". " << getPavimentos() << " pavimentos, " << getQuartos() 
    << " quartos, " << getAreaGeral() << "m2 de área de terreno e " << getAreaConstruida() 
    << "m2 de área construída. R$ " << getValorImovel() << ".\n" ;
}

Apartamento::Apartamento()
    :Imovel(2)
{
    areaDoAp = 0;
    numeroDeQuartos = 0;
    numeroDoAndar = 0;
    valorDoCondominio = 0;
    numeroDeVagasDaGaragem = 0;
}

double Apartamento::getAreaDoAp(){
    return areaDoAp;
}

int Apartamento::getNQuartos(){
    return numeroDeQuartos;
}

int Apartamento::getNAndar(){
    return numeroDoAndar;
}

double Apartamento::getValorDoCondominio(){
    return valorDoCondominio;
}

int Apartamento::getNVagasGaragem(){
    return numeroDeVagasDaGaragem;
}

void Apartamento::setEspecificacoesApartamento(double areaDoAp, int numeroDeQuartos, int numeroDoAndar, double valorDoCondominio, int numeroDeVagasDaGaragem){
    this->areaDoAp = areaDoAp;
    this->numeroDeQuartos = numeroDeQuartos;
    this->numeroDoAndar = numeroDoAndar;
    this->valorDoCondominio = valorDoCondominio;
    this->numeroDeVagasDaGaragem = numeroDeVagasDaGaragem;
}

void Apartamento::lerAtributos(){
    double areaDoApGenerica, valorDoCondominioGenerico, valorDoImovelGenerico;
    int numeroDeQuartos, numeroDoAndar, numeroDeVagasDaGaragem;
    std::string disponibilidadeImovelG;
    //Apartamento para aluguel. 150m2 de área, 3 quartos, 12 andar(es), 300 de condomínio, 1 vaga(s) de garagem. R$ 1500.
    std::cin >> valorDoImovelGenerico;
    Apartamento::setValorImovel(valorDoImovelGenerico);
    std::cin.ignore();

    getline(std::cin, disponibilidadeImovelG);
    Apartamento::setCondicaoImovel(disponibilidadeImovelG);

    std::cin >> areaDoApGenerica;
    std::cin >> numeroDeQuartos;
    std::cin >> numeroDoAndar;
    std::cin >> valorDoCondominioGenerico;
    std::cin >> numeroDeVagasDaGaragem;

    Apartamento::setEspecificacoesApartamento(areaDoApGenerica, numeroDeQuartos, numeroDoAndar, valorDoCondominioGenerico, numeroDeVagasDaGaragem);
}

void Apartamento::exibeAtributos(){
    //Apartamento para aluguel. 150m2 de área, 3 quartos, 12 andar(es), 300 de condomínio, 1 vaga(s) de garagem. R$ 1500.
    std::cout << getNomeImovel() << " para " << getCondicaoImovel() << ". " << getAreaDoAp() << "m2 de área, " 
    << getNQuartos() << " quartos, " << getNAndar() << " andar(es), " << getValorDoCondominio() << " de condomínio, " 
    << getNVagasGaragem() << " vaga(s) de garagem. R$ " << getValorImovel() << "." << std::endl;
}

Terreno::Terreno()
    :Imovel(3)
{
    areaDoTerreno = 0;
}

double Terreno::getAreaDoTerreno(){
    return areaDoTerreno;
}

void Terreno::setAreaDoTerreno(double areaDoTerreno){
    this->areaDoTerreno = areaDoTerreno;
}

void Terreno::lerAtributos(){
    double areaGenerica;
    double valorGenerico;
    std::string disponibilidadeImovelGenerica;

    std::cin >> valorGenerico;
    Terreno::setValorImovel(valorGenerico);

    std::cin.ignore();

    getline(std::cin, disponibilidadeImovelGenerica);
    Terreno::setCondicaoImovel(disponibilidadeImovelGenerica);

    std::cin >> areaGenerica;
    Terreno::setAreaDoTerreno(areaGenerica);
}

void Terreno::exibeAtributos(){
    //Terreno para aluguel. 250m2 de área de terreno. R$ 1200.
    std::cout << getNomeImovel() << " para " << getCondicaoImovel() << ". " << 
    getAreaDoTerreno() << "m2 de área do terreno. R$ " << getValorImovel() << ". " << std::endl;
}
