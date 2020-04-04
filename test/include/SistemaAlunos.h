#ifndef SISTEMAALUNOS_H
#define SISTEMAALUNOS_H
#include "Aluno.h"

class SistemaAlunos : public Aluno
{
    public:
        SistemaAlunos();
        virtual ~SistemaAlunos();

        void visualizarAlunos();
        void consultaAluno();
        void cadastraAluno(Aluno *al);
        void removeAluno(string c);
        void editaAluno(string c);
        void pagto();
        void cancelaPagto();

    protected:

    private:
};

#endif // SISTEMAALUNOS_H
