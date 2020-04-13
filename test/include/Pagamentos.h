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
        void setDia(int);
        void setMes(int);
        void setAno(int);

        void geraParcelas();
        void mostraParcelas();
        string alteraParcela(string nomedomes, int data);
        int Dia, Mes, Ano, Janeiro, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro;
        int DiaOriginal, MesOriginal, AnoOriginal;
        bool JaneiroPago,FevereiroPago,MarcoPago,AbrilPago,MaioPago,JunhoPago,JulhoPago,AgostoPago,SetembroPago,OutubroPago,NovembroPago,DezembroPago;
        //int JaneiroPagoEm,FevereiroPagoEm,MarcoPagoEm,AbrilPagoEm,MaioPagoEm,JunhoPagoEm,JulhoPagoEm,AgostoPagoEm,SetembroPagoEm,OutubroPagoEm,NovembroPagoEm,DezembroPagoEm;
};

#endif
