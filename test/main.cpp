#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "Dados.h"
#include "Pagamentos.h"
#include "Aluno.h"

using namespace std;

int main(){
    Aluno *a1 = new Aluno("Daniel Cassiano", "123456789", "Borborema");
    a1->setPagamento(20,03,2020);
    a1->geraParcelas();


    Aluno *a2 = new Aluno("Antônio Cassiano", "123456789", "Borborema");
    a2->setPagamento(30,03,2020);
    a2->geraParcelas();

    a1->cadastraAluno(a1);
    a2->cadastraAluno(a2);

    a1->visualizarAlunos();

    return 0;
}
