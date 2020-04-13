#include "Pagamentos.h"
#include <iostream>
//#include <algorithm>

using namespace std;

Pagamentos::Pagamentos(){
    this->Dia = 0;
    this->Mes = 0;
    this->Ano = 0;
    this->DiaOriginal = 0;
    this->MesOriginal = 0;
    this->AnoOriginal = 0;
    this->Janeiro = 0;
    this->Fevereiro = 0;
    this->Marco = 0;
    this->Abril = 0;
    this->Maio = 0;
    this->Junho = 0;
    this->Julho = 0;
    this->Agosto = 0;
    this->Setembro = 0;
    this->Outubro = 0;
    this->Novembro = 0;
    this->Dezembro = 0;
    this->JaneiroPago = false;
    this->FevereiroPago = false;
    this->MarcoPago = false;
    this->AbrilPago = false;
    this->MaioPago = false;
    this->JunhoPago = false;
    this->JulhoPago = false;
    this->AgostoPago = false;
    this->SetembroPago = false;
    this->OutubroPago = false;
    this->NovembroPago = false;
    this->DezembroPago = false;
}

void Pagamentos::setPagamento(int dia, int mes, int ano)
{
    if(dia < 1 || dia > 31){
        this->Dia = 0;
        this->DiaOriginal= Dia;
    }
    if(ano >= 0)
    {
        this->Ano = ano;
        this->AnoOriginal = ano;
    }
    if(ano < 0){
        this->Ano = 0;
    }
    if(mes <= 12 && mes >=1)
    {
        this->Mes = mes;
        this->MesOriginal = mes;

        if(mes == 1){
            this->JaneiroPago = true;
        }
        if(mes == 2){
            this->FevereiroPago = true;
        }
        if(mes == 3){
            this->MarcoPago = true;
        }
        if(mes == 4){
            this->AbrilPago = true;
        }
        if(mes == 5){
            this->MaioPago = true;
        }
        if(mes == 6){
            this->JunhoPago = true;
        }
        if(mes == 7){
            this->JulhoPago = true;
        }
        if(mes == 8){
            this->AgostoPago = true;
        }
        if(mes == 9){
            this->SetembroPago = true;
        }
        if(mes == 10){
            this->OutubroPago = true;
        }
        if(mes == 11){
            this->NovembroPago = true;
        }
        if(mes == 12){
            this->DezembroPago = true;
        }

        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        {
            if(dia >= 1 && dia <= 31)
                this->Dia = dia;
            else this->Dia = 31;
        }
        else if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            if(dia >= 1 && dia <= 30)
                this->Dia = dia;
            else this->Dia = 30;
        }
        else if(mes == 2)
        {
            if(dia >= 1 && dia <= 28)
                this->Dia = dia;
            else this->Dia = 28;
        }
    }
    else this->Mes = 0;
    if(dia == 1){
        this->Dia = dia;
    }
}

int Pagamentos::getAno()
{
    return this->Ano;
}

int Pagamentos::getDia()
{
    return this->Dia;
}

int Pagamentos::getMes()
{
    return this->Mes;
}

void Pagamentos::setMes(int mes)
{
    Mes = (mes >= 1 && mes <= 12) ? mes : 1;
}

void Pagamentos::setAno(int ano)
{
    Ano = (ano >= 0) ? ano : -ano;
}

void Pagamentos::setDia(int dia){
    Dia = (dia >=1 && dia <= 31) ? dia : 0;
}

void Pagamentos::geraParcelas(){
    this->Janeiro = this->Dia;
    if(Dia > 0 && Dia <= 28){this->Fevereiro = this->Dia;}else{this->Fevereiro = 28;}
    this->Marco = this->Dia;
    if(Dia > 0 && Dia <= 30){this->Abril = this->Dia;}else{this->Abril = 30;}
    this->Maio = this->Dia;
    if(Dia > 0 && Dia <= 30){this->Junho = this->Dia;}else{this->Junho = 30;}
    this->Julho = this->Dia;
    this->Agosto = this->Dia;
    if(Dia > 0 && Dia <= 30){this->Setembro = this->Dia;}else{this->Setembro = 30;}
    this->Outubro = this->Dia;
    if(Dia > 0 && Dia <= 30){this->Novembro = this->Dia;}else{this->Novembro = 30;}
    this->Dezembro = this->Dia;
}

string Pagamentos::alteraParcela(string n, int d){
    if(n=="Janeiro" || n=="janeiro" || n=="JANEIRO"){
        if(d > 0 && d <= 31){
            this->Janeiro = d;
            }else{
                this->Janeiro = 31;
                return "Data inválida e alterada automaticamente para o último dia do mês!";
            }
    }

    if(n=="Fevereiro" || n=="fevereiro" || n=="FEVEREIRO"){
       if(d > 0 && d <= 28){
            this->Fevereiro = d;
            }else{
                this->Fevereiro = 28;
                return "Data inválida e alterada automaticamente para o último dia do mês!";
            }
    }

    if(n=="Março" || n=="março" || n=="MARÇO"){
       if(d > 0 && d <=31){
            this->Marco = d;
            }else{
                this->Marco = 31;
                return "Data inválida e alterada automaticamente para o último dia do mês!";
            }
    }

    if(n=="Abril" || n=="abril" || n=="ABRIL"){
       if(d > 0 && d <= 30){
            this->Abril = d;
            }else{
                this->Abril = 30;
                return "Data inválida e alterada automaticamente para o último dia do mês!";
            }
    }

    if(n=="Maio" || n=="maio" || n=="MAIO"){
       if(d > 0 && d <= 31){
            this->Maio = d;
            }else{
                this->Maio = 31;
                return "Data inválida e alterada automaticamente para o último dia do mês!";
            }
    }

    if(n=="Junho" || n=="junho" || n=="JUNHO"){
       if(d > 0 && d <= 30){
            this->Junho = d;
            }else{
                this->Junho = 30;
                return "Data inválida e alterada automaticamente para o último dia do mês!";
            }
    }

    if(n=="Julho" || n=="julho" || n=="JULHO"){
       if(d > 0 && d <= 31){
            this->Julho = d;
            }else{
                this->Julho = 31;
                return "Data inválida e alterada automaticamente para o último dia do mês!";
            }
    }

    if(n=="Agosto" || n=="agosto" || n=="AGOSTO"){
       if(d > 0 && d <= 31){
            this->Agosto = d;
            }else{
                this->Agosto = 31;
                return "Data inválida e alterada automaticamente para o último dia do mês!";
            }
    }

    if(n=="Setembro" || n=="setembro" || n=="SETEMBRO"){
       if(d > 0 && d <= 30){
            this->Setembro = d;
            }else{
                this->Setembro = 30;
                return "Data inválida e alterada automaticamente para o último dia do mês!";
            }
    }

    if(n=="Outubro" || n=="outubro" || n=="OUTUBRO"){
       if(d > 0 && d <= 31){
            this->Outubro = d;
            }else{
                this->Outubro = 31;
                return "Data inválida e alterada automaticamente para o último dia do mês!";
            }
    }

    if(n=="Novembro" || n=="novembro" || n=="NOVEMBRO"){
       if(d > 0 && d <= 30){
            this->Novembro = d;
            }else{
                this->Novembro = 30;
                return "Data inválida e alterada automaticamente para o último dia do mês!";
            }
    }

    if(n=="Dezembro" || n=="dezembro" || n=="DEZEMBRO"){
       if(d > 0 && d <= 31){
            this->Dezembro = d;
            }else{
                this->Dezembro = 31;
                return "Data inválida e alterada automaticamente para o último dia do mês!";
            }
    }

    return "AlteraParcela() Falhou!";
}

void Pagamentos::mostraParcelas(){
    cout << Janeiro << endl;
    cout << Fevereiro << endl;
    cout << Marco << endl;
    cout << Abril << endl;
    cout << Maio << endl;
    cout << Junho << endl;
    cout << Julho << endl;
    cout << Agosto << endl;
    cout << Setembro << endl;
    cout << Outubro << endl;
    cout << Novembro << endl;
    cout << Dezembro << endl;
};
