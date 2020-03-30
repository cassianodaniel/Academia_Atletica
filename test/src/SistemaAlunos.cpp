#include "SistemaAlunos.h"
#include <iostream>
#include "stdio.h"
#include <string>
#include <algorithm>
#include <vector>

SistemaAlunos::SistemaAlunos()
{
    //ctor
}

SistemaAlunos::~SistemaAlunos()
{
    //dtor
}

void SistemaAlunos::visualizarAlunos(){
    for(unsigned int i = 0; i < alunos.size(); i++){
        cout << "Aluno [" << i+1 << "]: " << alunos[i].nome << " ";
        cout << "Cidade: " << alunos[i].cidade << " ";
        cout << "CPF: " << alunos[i].cpf << endl;
        cout << "-----------------------------------------------------------" << endl;
    }
}

void SistemaAlunos::cadastraAluno(Aluno *al){
    alunos.push_back(*al);
}

void SistemaAlunos::consultaAluno(){
    cout << "Por favor, digite o NOME do aluno desejado para consulta." << endl;
    string n;
    getline(cin, n);
    cout << n;
    for(unsigned int i = 0; i < this->alunos.size(); i++){
        transform(n.begin(),n.end(), n.begin(), ::tolower);
        transform(alunos[i].nome.begin(),alunos[i].nome.end(), alunos[i].nome.begin(), ::tolower);

        if(alunos[i].nome.find(n)!= std::string::npos){
            cout << "\n" << endl;
        cout << "Aluno [" << i+1 << "]: " << alunos[i].nome << " ";
        cout << "Cidade: " << alunos[i].cidade << " ";
        cout << "CPF: " << alunos[i].cpf << endl;
        cout << endl;
        cout << "Janeiro : " << alunos[i].Janeiro << endl;
        cout << "Fevereiro : " << alunos[i].Fevereiro << endl;
        cout << "Marco : " << alunos[i].Marco << endl;
        cout << "Abril : " << alunos[i].Abril << endl;
        cout << "Maio : " << alunos[i].Maio << endl;
        cout << "Junho : " << alunos[i].Junho << endl;
        cout << "Julho : " << alunos[i].Julho << endl;
        cout << "Agosto : " << alunos[i].Agosto << endl;
        cout << "Setembro : " << alunos[i].Setembro << endl;
        cout << "Outubro : " << alunos[i].Outubro << endl;
        cout << "Novembro : " << alunos[i].Novembro << endl;
        cout << "Dezembro : " << alunos[i].Dezembro << endl;
        cout << "-----------------------------------------------------------" << endl;
        }
    }
}
