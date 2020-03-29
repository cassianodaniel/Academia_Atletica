#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "Aluno.h"
#include "Pagamentos.h"

using namespace std;

int main(){
    Pagamentos *a1 = new Aluno("Daniel Cassiano", "123456789");
    a1->setPagamento(20,03,2020);

    a1->print();

    printf(" Teste de main");

    return 0;
}
