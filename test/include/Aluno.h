#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>
#include <string>

#include "Pagamentos.h"

using namespace std;

class Aluno : public Pagamentos{
    public:
        Aluno();
        Aluno(string nome,string cpf);
    private:
        string nome;
        string cpf;
};

#endif
