#include "Dados.h"

Dados::Dados(){
    this->nome = ".";
    this->cpf = "0";
    this->ativo = false;
    this->cidade = ".";
    this->endereco = ".";
    this->telefone = ".";
}

Dados::Dados(string n,string c,string cid, string ende, string tel){
    this->nome = n;
    this->cpf = c;
    this->cidade = cid;
    this->ativo = true;
    this->endereco = ende;
    this->telefone = tel;
}
