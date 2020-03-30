#include "Dados.h"

Dados::Dados(){
    this->nome = ".";
    this->cpf = "0";
    this->ativo = false;
    this->cidade = ".";
}

Dados::Dados(string n,string c,string cid){
    this->nome = n;
    this->cpf = c;
    this->cidade = cid;
    this->ativo = true;
}
