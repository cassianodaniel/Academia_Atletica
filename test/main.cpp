#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "Aluno.h"
#include "Pagamentos.h"

using namespace std;

int main(){
    Pagamentos *a1 = new Aluno("Daniel Cassiano", "123456789");
    a1->setPagamento(20,03,2020);
    a1->geraParcelas();
    a1->alteraParcela("Janeiro", 23);
    a1->alteraParcela("Fevereiro", 2);
    a1->alteraParcela("Março", 3);
    a1->alteraParcela("Abril", 13);
    a1->mostraParcelas();

    return 0;
}
