#include "Aluno.h"

Aluno::Aluno(){
    this->nome = ".";
    this->cpf = "0";
}

Aluno::Aluno(string n,string c){
    this->nome = n;
    this->cpf = c;
}
