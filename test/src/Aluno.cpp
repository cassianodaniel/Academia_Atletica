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

Aluno::Aluno(string n,string c,string cid)
{
    nome = n;
    cpf = c;
    ativo = true;
    cidade = cid;
}

Aluno::~Aluno()
{
    //dtor
}
