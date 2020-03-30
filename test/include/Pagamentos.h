#ifndef PAGAMENTOS_H
#define PAGAMENTOS_H

#include <iostream>
#include <string.h>

using namespace std;

class Pagamentos{
    public:
        Pagamentos();
        void setPagamento(int,int,int);

        int getDia();
        int getAno();
        int getMes();
        void setMes(int);
        void setAno(int);
        string getMesExtenso(int);

        void geraParcelas();
        void mostraParcelas();
        string alteraParcela(string nomedomes, int data);
        int Dia, Mes, Ano, Janeiro, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro;

};

#endif
