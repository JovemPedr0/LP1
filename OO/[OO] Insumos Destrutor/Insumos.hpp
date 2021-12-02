#ifndef INSUMOS_CPP
#define INSUMOS_CPP

#include <string>
#include <iostream>
#include <vector>

class Insumo{
    protected:
        std::string nomeInsumo;
        int quantidadeInsumos;
        double valorUnitario;
        std::string dataDeVencimento;
        std::string nomeFabricante;
        int tipoInsumo;
        
    public:
        Insumo();
        Insumo(std::string nomeInsumo, int quantidadeInsumos, double valorUnitario, std::string dataDeVencimento, std::string nomeFabricante, int tipoInsumo);
        virtual ~Insumo();

        std::string getNomeInsumo();
        int getQuantidadeInsumos();
        double getValorUnitario();
        std::string getDataDeVencimento();
        std::string getNomeFrabricante();
        int getTipoInsumo();

        void setNomeInsumo(std::string nomeInsumo);
        void setQuantidadeInsumos(int quantidadeInsumos);
        void setValorUnitario(double valorUnitario);
        void setDataDeVencimento(std::string nomeFabricante);
        void setNomeFabricante(std::string nomeFabricante);
        void setTipoInsumo(int tipoInsumo);
};

class Vacina: public Insumo{
    private:
        int tipoVacina;
        int quantidadeDeDoses;
        int intervalo;
    
    public:
        Vacina();
        Vacina(std::string nomeInsumo, int quantidadeInsumos, double valorUnitario, std::string dataDeVencimento, std::string nomeFabricante, int tipoInsumo, int tipoVacina, int quantidadeDeDoses, int intervalo);
        virtual ~Vacina();

        int getTipoVacina();
        int getQuantidadeDoses();
        int getIntervalo();

        void setTipoVacina(int tipoVacina);
        void setQuantidadeDoses(int quantidadeDeDoses);
        void setIntervalo(int intervalo);
};

class Medicamento: public Insumo{
    private:
        std::string nDosagem;
        std::string administracao;
        std::string disponibilizacao;
    
    public:
        Medicamento();
        Medicamento(std::string nomeInsumo, int quantidadeInsumos, double valorUnitario, std::string dataDeVencimento, std::string nomeFabricante, int tipoInsumo, 
        std::string nDosagem, std::string administracao, std::string disponibilizacao);
        virtual ~Medicamento();

        std::string getDosagem();
        std::string getAdministracao();
        std::string getDisponibilizacao();

        void setDosagem(std::string nDosagem);
        void setAdminsitracao(std::string administracao);
        void setDisponibilizacao(std::string disponibilizacao);
        
};

class EPI: public Insumo{
    private:
        int tipoEPI;
        std::string descricaoEPI;
    
    public:
        EPI();
        EPI(std::string nomeInsumo, int quantidadeInsumos, double valorUnitario, std::string dataDeVencimento, std::string nomeFabricante, int tipoInsumo, int tipoEPI, std::string descricaoEPI);
        ~EPI();

        int getTipoEPI();
        std::string getDescricaoEPI();

        void setTipoEPI(int tipoEPI);
        void setDescricaoEPI(std::string descricaoEPI);
};

class Local{
    private:
        std::string nome;
        int tipoLocal;

        std::vector <Insumo*> insumosVec;
        Insumo* insumosArr[3];

    
    public:
        Local();
        virtual ~Local();

        std::string getNomeLocal();
        int getTipoLocal();

        void setNomeLocal(std::string nome);
        void setTipoLocal(int tipoLocal);

        void addInsumoAr(Insumo *in, int index);
        void addInsumoVec(Insumo *in);
};




#endif