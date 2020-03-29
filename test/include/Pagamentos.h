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
        void print();

        void geraParcelas();
        //void visualizaPagamentos();

    protected:
        int Dia, Mes, Ano;
};

#endif
