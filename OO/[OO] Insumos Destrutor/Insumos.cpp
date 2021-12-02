#include "Insumos.hpp"

Insumo::Insumo(){
    nomeInsumo = "-";
    quantidadeInsumos = 0;
    valorUnitario = 0;
    dataDeVencimento = "-";
    nomeFabricante = "-";
    tipoInsumo = 0;
}

Insumo::Insumo(std::string nomeInsumo, int quantidadeInsumos, double valorUnitario, std::string dataDeVencimento, std::string nomeFabricante, int tipoInsumo){
    this->nomeInsumo = nomeInsumo;
    this->quantidadeInsumos = quantidadeInsumos;
    this->valorUnitario = valorUnitario;
    this->dataDeVencimento = dataDeVencimento;
    this->nomeFabricante = nomeFabricante;
    this->tipoInsumo = tipoInsumo;
}

Insumo::~Insumo(){
    std::cout << "Deletando Insumos" << std::endl;
}

std::string Insumo::getNomeInsumo(){
    return nomeInsumo;
}

int Insumo::getQuantidadeInsumos(){
    return quantidadeInsumos;
}

double Insumo::getValorUnitario(){
    return valorUnitario;
}

std::string Insumo::getDataDeVencimento(){
    return dataDeVencimento;
}

std::string Insumo::getNomeFrabricante(){
    return nomeFabricante;
}

int Insumo::getTipoInsumo(){
    return tipoInsumo;
}

void Insumo::setNomeInsumo(std::string nomeInsumo){
    this->nomeInsumo = nomeInsumo;
}

void Insumo::setQuantidadeInsumos(int quantidadeInsumos){
    this->quantidadeInsumos = quantidadeInsumos;
}

void Insumo::setValorUnitario(double valorUnitario){
    this->valorUnitario = valorUnitario;
}

void Insumo::setDataDeVencimento(std::string nomeFabricante){
    this->dataDeVencimento = dataDeVencimento;
}

void Insumo::setNomeFabricante(std::string nomeFabricante){
    this->nomeFabricante = nomeFabricante;
}

void Insumo::setTipoInsumo(int tipoInsumo){
    this->tipoInsumo = tipoInsumo;
}

Vacina::Vacina(){
    tipoVacina = 0;
}

Vacina::Vacina(std::string nomeInsumo, int quantidadeInsumos, double valorUnitario, std::string dataDeVencimento, 
std::string nomeFabricante, int tipoInsumo, int tipoVacina, int quantidadeDeDoses, int intervalo){
    this->nomeInsumo = nomeInsumo;
    this->quantidadeInsumos = quantidadeInsumos;
    this->valorUnitario = valorUnitario;
    this->dataDeVencimento = dataDeVencimento;
    this->nomeFabricante = nomeFabricante;
    this->tipoInsumo = tipoInsumo;
    this->tipoVacina = tipoVacina;
    this->quantidadeDeDoses = quantidadeDeDoses;
    this->intervalo = intervalo;
}


Vacina::~Vacina(){
    std::cout << "Deletando Vacina" << std::endl;
}

int Vacina::getTipoVacina(){
    return tipoVacina;
}

int Vacina::getQuantidadeDoses(){
    return quantidadeDeDoses;
}

int Vacina::getIntervalo(){
    return intervalo;
}

void Vacina::setTipoVacina(int tipoVacina){
    this->tipoVacina = tipoVacina;
}

void Vacina::setQuantidadeDoses(int quantidadeDeDoses){
    this->quantidadeDeDoses = quantidadeDeDoses;
}

void Vacina::setIntervalo(int intervalo){
    this->intervalo = intervalo;
}

Medicamento::Medicamento(){
    nDosagem = "-";
    administracao = "-";
    disponibilizacao = "-";
}

Medicamento::Medicamento(std::string nomeInsumo, int quantidadeInsumos, double valorUnitario, std::string dataDeVencimento, std::string nomeFabricante, int tipoInsumo, 
std::string nDosagem, std::string administracao, std::string disponibilizacao){
    this->nomeInsumo = nomeInsumo;
    this->quantidadeInsumos = quantidadeInsumos;
    this->valorUnitario = valorUnitario;
    this->dataDeVencimento = dataDeVencimento;
    this->nomeFabricante = nomeFabricante;
    this->tipoInsumo = tipoInsumo;
    this->nDosagem = nDosagem;
    this->administracao = administracao;
    this->disponibilizacao = disponibilizacao;
}

Medicamento::~Medicamento(){
    std::cout << "Deletando Medicamento" << std::endl;
}

std::string Medicamento::getDosagem(){
    return nDosagem;
}

std::string Medicamento::getAdministracao(){
    return administracao;
}

std::string Medicamento::getDisponibilizacao(){
    return disponibilizacao;
}

void Medicamento::setDosagem(std::string nDosagem){
    this->nDosagem = nDosagem;
}

void Medicamento::setAdminsitracao(std::string administracao){
    this->administracao = administracao;
}

void Medicamento::setDisponibilizacao(std::string disponibilizacao){
    this->disponibilizacao = disponibilizacao;
}

EPI::EPI(){
    tipoEPI = 0;
    descricaoEPI = "-";
}

EPI::EPI(std::string nomeInsumo, int quantidadeInsumos, double valorUnitario, std::string dataDeVencimento, 
std::string nomeFabricante, int tipoInsumo, int tipoEPI, std::string descricaoEPI){
    this->nomeInsumo = nomeInsumo;
    this->quantidadeInsumos = quantidadeInsumos;
    this->valorUnitario = valorUnitario;
    this->dataDeVencimento = dataDeVencimento;
    this->nomeFabricante = nomeFabricante;
    this->tipoInsumo = tipoInsumo;
    this->tipoEPI = tipoEPI;
    this->descricaoEPI = descricaoEPI;
}

EPI::~EPI(){
    std::cout << "Deletando EPI" << std::endl;
}


int EPI::getTipoEPI(){
    return tipoEPI;
}

std::string EPI::getDescricaoEPI(){
    return descricaoEPI;
}

void EPI::setTipoEPI(int tipoEPI){
    this->tipoEPI = tipoEPI;
}
void EPI::setDescricaoEPI(std::string descricaoEPI){
    this->descricaoEPI = descricaoEPI;
}

Local::Local(){
    nome = "-";
    tipoLocal = 0;
}

Local::~Local(){
    std::cout << "Deletando Local" << std::endl;

    for (int i = 0; i < 3; i++){
        delete insumosArr[i];
    }
    

    for (int i = 0; i < insumosVec.size(); i++){
        delete insumosVec[i];
    }

    insumosVec.clear();
    
}

std::string Local::getNomeLocal(){
    return nome;
}

int Local::getTipoLocal(){
    return tipoLocal;
}

void Local::setNomeLocal(std::string nome){
    this->nome = nome;
}

void Local::setTipoLocal(int tipoLocal){
    this->tipoLocal = tipoLocal;
}

void Local::addInsumoVec(Insumo *in){
    insumosVec.push_back(in);
}

void Local::addInsumoAr(Insumo *in, int index){
    insumosArr[index] = in;
}