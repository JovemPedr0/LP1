#ifndef IMOVEIS_H
#define IMOVEIS_H

#include <string>

class Imovel{
    protected:
        std::string nomeImovel;
        double valorImovel;
        int tipoImovel;
        std::string disponibilidadeImovel;
    
    public:
        Imovel();
        Imovel(int tipo);

        std::string getNomeImovel();
        double getValorImovel();
        std::string getCondicaoImovel();

        void setNomeImovel(std::string nomeImovel);
        void setValorImovel(double valorImovel);
        void setCondicaoImovel(std::string disponibilidadeImovel);

        virtual void lerAtributos() = 0;
        virtual void exibeAtributos() = 0;
};

class Casa: public Imovel{
    private:
        double numeroDePavimentos;
        int numeroDeQuartos;
        double areaDoTerreno;
        double areaConstruida;
    
    public:
        Casa();

        double getPavimentos();
        int getQuartos();
        double getAreaGeral();
        double getAreaConstruida();

        void setEspecificacoesCasa(double numeroDePavimentos, int numeroDeQuartos, double areaDoTerreno , double areaConstruida);

        void lerAtributos();
        void exibeAtributos();
};

class Apartamento: public Imovel{
    private:
        double areaDoAp;
        int numeroDeQuartos;
        int numeroDoAndar;
        double valorDoCondominio;
        int numeroDeVagasDaGaragem;

    public:
        Apartamento();

        double getAreaDoAp();
        int getNQuartos();
        int getNAndar();
        double getValorDoCondominio();
        int getNVagasGaragem();

        void setEspecificacoesApartamento(double areaDoAp, int numeroDeQuartos, int numeroDoAndar, double valorDoCondominio, int numeroDeVagasDaGaragem);

        void lerAtributos();
        void exibeAtributos();
};

class Terreno: public Imovel{
    private:
        double areaDoTerreno;
    
    public:
        Terreno();

        double getAreaDoTerreno();

        void setAreaDoTerreno(double areaDoTerreno);

        void lerAtributos();
        void exibeAtributos();
};


#endif