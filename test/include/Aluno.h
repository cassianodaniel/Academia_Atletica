#ifndef ALUNO_H
#define ALUNO_H
#include "Dados.h"
#include <vector>
#include <iostream>

class Aluno : public Dados
{
    public:
        Aluno();

        Aluno(string nome,string cpf,string cidade, string endereco, string telefone);

        virtual ~Aluno();

        vector<Dados*> alunos;

    protected:

    private:
};

#endif // ALUNO_H
