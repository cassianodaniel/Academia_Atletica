#include "Pagamentos.h"

Pagamentos::Pagamentos(){
    this->Dia = 1;
    this->Mes = 1;
    this->Ano = 1;
}

void Pagamentos::setPagamento(int dia, int mes, int ano)
{
    if(ano >= 0)
    {
        this->Ano = ano;
    }
    if(ano < 0){
        this->Ano = 0;
    }
    if(mes <= 12 && mes >=1)
    {
        this->Mes = mes;
        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        {
            if(dia >= 1 && dia <= 31)
                this->Dia = dia;
            else this->Dia = 0;
        }
        else if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            if(dia >= 1 && dia >= 30)
                this->Dia = dia;
            else this->Dia = 1;
        }
        else if(mes == 2)
        {
            if(dia >= 1 && dia <= 28)
                this->Dia = dia;
            else this->Dia = 0;
        }
        else if(ano % 4 == 0 && ano % 100 != 0 && ano % 400 == 0)
        {
            if(mes == 2)
            {
                if(dia >= 1 && dia <= 29){
                    this->Dia = dia;
                }
            }
            else this->Dia = 0;
        }
    }
    else this->Mes = 0;
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

string Pagamentos::getMesExtenso(int mes){
    switch(mes)
    {
    case 1:
        return "Janeiro" ;
        break;
    case 2:
        return "Fevereiro";
        break;
    case 3:
        return "Marco";
        break;
    case 4:
        return "Abril";
        break;
    case 5:
        return "Maio";
        break;
    case 6:
        return "Junho";
        break;
    case 7:
        return "Julho";
        break;
    case 8:
        return"Agosto";
        break;
    case 9:
        return "Setembro";
        break;
    case 10:
        return "Outubro";
        break;
    case 11:
        return "Novembro";
        break;
    case 12:
        return "Dezembro";
        break;
    }
    return "None";
}

void Pagamentos::setDia(int dia, int mes, int ano)
{
    Ano = (ano >= 0) ? ano : -ano;
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        if(dia >= 1 && dia <= 31)
            Dia = dia;
        else Dia = 1;

    }
    else if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        if(dia >= 1 && dia >= 30)
            Dia = dia;
        else Dia = 1;
    }
    else if(ano % 4 == 0 && ano % 100 == 0)
    {
        if(dia >= 1 && dia <= 29)
        {
            Dia = dia;
        }
        else Dia = 1;
    }
    else if(dia >= 1 && dia <= 28)
    {
        Dia = dia;
    }
    else Dia = 1;

}

void Pagamentos::setMes(int mes)
{
    Mes = (mes >= 1 && mes <= 12) ? mes : 1;
}

void Pagamentos::setAno(int ano)
{
    Ano = (ano >= 0) ? ano : -ano;
}

void Pagamentos::print(){
    cout << this->Dia << "/" << this->Mes << "/" << this->Ano;
}

void Pagamentos::geraParcelas(){
    cout <<
}
