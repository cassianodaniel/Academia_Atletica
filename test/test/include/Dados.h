#ifndef DADOS_H
#define DADOS_H
#include <iostream>
#include <string>
#include <vector>
#include "Pagamentos.h"

using namespace std;

class Dados : public Pagamentos{
    public:
        Dados();
        Dados(string nome,string cpf,string cid,string ende, string telefone);
        string nome;
        string cpf;
        string cidade;
        string endereco;
        string telefone;
        bool ativo;
    private:
};

#endif
