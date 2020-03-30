#include "Aluno.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

Aluno::Aluno()
{
    nome = ".";
    cpf = "0";
    ativo = false;
    cidade = ".";
}

Aluno::Aluno(string n,string c,string cid)
{
    nome = n;
    cpf = c;
    ativo = true;
    cidade = cid;
}


void Aluno::cadastraAluno(Aluno *al){
    alunos.push_back(*al);
}

void Aluno::visualizarAlunos(){
    for(unsigned int i = 0; i < 2;i++){
        cout << "Aluno [" << i+1 << "]: ";
        cout << alunos[i].nome << endl;
        cout << "CPF: " << alunos[i].cpf << endl;
        cout << "-----------------------------------------------------------" << endl;
    }
}

Aluno::~Aluno()
{
    //dtor
}

void Aluno::consultaAluno(){
    cout << "Por favor, digite o NOME do aluno desejado para consulta." << endl;
    string n;
    getline(cin, n);
    cout << n;
    for(unsigned int i = 0; i < this->alunos.size(); i++){
        this->alunos[i].nome.find(n);
    }
}
