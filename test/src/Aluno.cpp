#include "Aluno.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

Aluno::Aluno()
{
    nome = ".";
    cpf = "0";
    ativo = false;
    cidade = ".";
}

Aluno::Aluno(string n,string c,string cid, string ende, string tel)
{
    nome = n;
    cpf = c;
    ativo = true;
    cidade = cid;
    endereco = ende;
    telefone = tel;
}

Aluno::~Aluno()
{
    //dtor
}
