#include "Pagamentos.h"

Pagamentos::Pagamentos(){
    this->Dia = 0;
    this->Mes = 0;
    this->Ano = 0;
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
    this->Janeiro = this->Dia;
    if(Dia > 0 && Dia < 29){this->Fevereiro = this->Dia;}else{this->Fevereiro = 28;}
    this->Marco = this->Dia;
    if(Dia > 0 && Dia < 31){this->Abril = this->Dia;}else{this->Abril = 30;}
    this->Maio = this->Dia;
    if(Dia > 0 && Dia < 31){this->Junho = this->Dia;}else{this->Junho = 30;}
    this->Julho = this->Dia;
    this->Agosto = this->Dia;
    if(Dia > 0 && Dia < 31){this->Setembro = this->Dia;}else{this->Setembro = 30;}
    this->Outubro = this->Dia;
    if(Dia > 0 && Dia < 31){this->Novembro = this->Dia;}else{this->Novembro = 30;}
    this->Dezembro = this->Dia;
}

string Pagamentos::alteraParcela(string n, int d){
    if(n=="Janeiro" || n=="janeiro" || n=="JANEIRO"){
        if(d > 0 && d <= 31){
            this->Janeiro = d;
            }else{
                this->Janeiro = 0;
                return "Data inválida e não alterada com sucesso!";
            }
    }

    if(n=="Fevereiro" || n=="fevereiro" || n=="FEVEREIRO"){
       if(d > 0 && d < 29){
            this->Fevereiro = d;
            }else{
                this->Fevereiro = 0;
                return "Data inválida e não alterada com sucesso!";
            }
    }

    if(n=="Março" || n=="março" || n=="MARÇO"){
       if(d > 0 && d <=31){
            this->Marco = d;
            }else{
                this->Marco = 0;
                return "Data inválida e não alterada com sucesso!";
            }
    }

    if(n=="Abril" || n=="abril" || n=="ABRIL"){
       if(d > 0 && d < 31){
            this->Abril = d;
            }else{
                this->Abril = 0;
                return "Data inválida e não alterada com sucesso!";
            }
    }

    //______________________________________________________________________ && statement doesn't work so then change to another and if
   /* if((n=="Maio" || n=="maio" || n=="MAIO")&&(d > 0 && d < 31))
        {this->Maio = d;}
        else{
            this->Maio = 0;
            return "Data inválida e não alterada com sucesso!";
        };
    if((n=="Junho" || n=="junho" || n=="JUNHO")&&(d > 0 && d < 31))
        {this->Junho = d;}
        else{
            this->Junho = 0;
            return "Data inválida e não alterada com sucesso!";
        };
    if((n=="Julho" || n=="julho" || n=="JULHO")&&(d > 0 && d < 31))
        {this->Julho = d;}
        else{
            this->Julho = 0;
            return "Data inválida e não alterada com sucesso!";
        };
    if((n=="Agosto" || n=="agosto" || n=="AGOSTO")&&(d > 0 && d < 31))
    {this->Agosto = d;}
        else{
            this->Agosto = 0;
            return "Data inválida e não alterada com sucesso!";
        };
    if((n=="Setembro" || n=="setembro" || n=="SETEMBRO")&&(d > 0 && d < 31))
    {this->Setembro = d;}
        else{
            this->Setembro = 0;
            return "Data inválida e não alterada com sucesso!";
        };
    if((n=="Outubro" || n=="outubro" || n=="OUTUBRO")&&(d > 0 && d <=31))
    {this->Outubro = d;}
        else{
            this->Outubro = 0;
            return "Data inválida e não alterada com sucesso!";
        }
    if((n=="Novembro" || n=="novembro" || n=="NOVEMBRO")&&(d > 0 && d < 31))
    {this->Novembro = d;}
        else{
            this->Novembro = 0;
            return "Data inválida e não alterada com sucesso!";
        };
    if((n=="Dezembro" || n=="dezembro" || n=="DEZEMBRO")&&(d > 0 && d <= 31))
    {this->Dezembro = d;}
        else{
            this->Dezembro = 0;
            return "Data inválida e não alterada com sucesso!";
        };
    */


    return "AlteraParcela() Falhou!";
}

void Pagamentos::mostraParcelas(){
    cout << this->Janeiro << endl;
    cout << this->Fevereiro << endl;
    cout << this->Marco << endl;
    cout << this->Abril << endl;
    cout << this->Maio << endl;
    cout << this->Junho << endl;
    cout << this->Julho << endl;
    cout << this->Agosto << endl;
    cout << this->Setembro << endl;
    cout << this->Outubro << endl;
    cout << this->Novembro << endl;
    cout << this->Dezembro << endl;
};
