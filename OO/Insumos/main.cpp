#include "Insumos.hpp"
#include <iostream>

using namespace std;

int main(){
    Local localDesejado;

    string nome;
    int quantidade;
    double valorUnitario;
    string dataDeVencimento;
    string nomeFabricante;
    int tipoInsumo;

    int tipoVacina;
    int quantidadeDeDoses;
    int intervalo;

    string dosagem;
    string administracao;
    string disponibilizacao;

    int tipoEPI;
    string descricaoEPI;

    getline(cin, nome);
    cin >> quantidade >> valorUnitario;
    getline(cin.ignore(), dataDeVencimento);
    getline(cin, nomeFabricante);
    getline(cin, nome);
    getline(cin, nome);
    cin >> quantidadeDeDoses >> intervalo;
    cin.ignore();

    localDesejado.addInsumoAr(new Vacina(nome, quantidade, valorUnitario, dataDeVencimento, nomeFabricante, tipoInsumo, tipoVacina, quantidadeDeDoses, intervalo), 0);
    localDesejado.addInsumoVec(new Vacina(nome, quantidade, valorUnitario, dataDeVencimento, nomeFabricante, tipoInsumo, tipoVacina, quantidadeDeDoses, intervalo));

    getline(cin, nome);
    cin >> quantidade >> valorUnitario;
    cin.ignore();
    getline(cin, dataDeVencimento);
    getline(cin, dataDeVencimento);
    getline(cin, nomeFabricante);
    getline(cin, dosagem);
    getline(cin, administracao);
    getline(cin, disponibilizacao);

    localDesejado.addInsumoAr(new Medicamento(nome, quantidade, valorUnitario, dataDeVencimento,nomeFabricante, tipoInsumo, dosagem, administracao, disponibilizacao), 1);
    localDesejado.addInsumoVec(new Medicamento(nome, quantidade, valorUnitario, dataDeVencimento,nomeFabricante, tipoInsumo, dosagem, administracao, disponibilizacao));

    int tipo;
        string descricao;

        getline(cin, nome);
        cin >> quantidade >> valorUnitario;
        cin.ignore();
        getline(cin, dataDeVencimento);
        getline(cin, dataDeVencimento);
        getline(cin, nomeFabricante);
        getline(cin, descricao);
        getline(cin, descricao);

        localDesejado.addInsumoAr(new EPI(nome, quantidade, valorUnitario, dataDeVencimento,nomeFabricante, tipoInsumo, tipo, descricao), 2);
        localDesejado.addInsumoVec(new EPI(nome, quantidade, valorUnitario, dataDeVencimento,nomeFabricante, tipoInsumo, tipo, descricao));

    return 0;
}