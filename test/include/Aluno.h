#ifndef ALUNO_H
#define ALUNO_H
#include "Dados.h"
#include <vector>
#include <iostream>

class Aluno : public Dados
{
    public:
        Aluno();

        Aluno(string nome,string cpf,string cidade);

        virtual ~Aluno();

        vector<Dados> alunos;

        void consultaAluno();
        void cadastraAluno(Aluno *al);
        void visualizarAlunos();


    protected:

    private:
};

#endif // ALUNO_H
