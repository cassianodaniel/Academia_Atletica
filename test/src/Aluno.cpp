#include "Aluno.h"

Aluno::Aluno(){
    this->nome = ".";
    this->cpf = "0";
    this->ativo = true;
}

Aluno::Aluno(string n,string c){
    this->nome = n;
    this->cpf = c;
}
