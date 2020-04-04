#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale>

#include "Dados.h"
#include "Pagamentos.h"
#include "Aluno.h"
#include "SistemaAlunos.h"

using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
SistemaAlunos *manager = new SistemaAlunos();
    int menu = 0;
    while(menu != 9){
            cout << "Bem-vindo ao programa de gerenciamento da Academia Atlética!" << endl;
            cout << "Por favor, digite a opção desejada:" << endl;
            cout << "1: Cadastrar novo aluno." << endl;
            cout << "2: Editar cadastro de aluno." << endl;
            cout << "3: Cadastrar novo pagamento." << endl;
            cout << "4: Cancelar pagamento." << endl;
            cout << "5: Consultar situação de aluno." << endl;
            cout << "6: Visualizar todos os alunos cadastrados." << endl;
            cout << "7: Remover aluno cadastrado." << endl;
            cout << "8: Fechar programa e salvar alterações/dados.\n" << endl;
            cout << ("Atenção! Apenas saia do programa utilizando o comando sair!\n\n");
    cin >> menu;
    cin.ignore();
    system("cls");
        switch(menu){
            case 1:{
                cout << "Por favor, digite o nome do(a) aluno(a) a ser cadastrado.\n" << endl;
                string nome;
                getline(cin,nome);
                system("cls");
                cout << "Por favor, digite o CPF do(a) aluno(a) a ser cadastrado.\n" << endl;
                string cpf;
                getline(cin,cpf);
                system("cls");
                cout << "Por favor, digite a cidade do(a) aluno(a) a ser cadastrado.\n" << endl;
                string cidade;
                getline(cin,cidade);
                system("cls");
                cout << "Por favor, digite o endereço do(a) aluno(a) a ser cadastrado.\n" << endl;
                string endereco;
                getline(cin,endereco);
                system("cls");
                cout << "Por favor, digite o telefone do(a) aluno(a) a ser cadastrado.\n" << endl;
                string telefone;
                getline(cin,telefone);
                system("cls");
                Aluno *a1 = new Aluno(nome, cpf, cidade, endereco, telefone);

                cout << "Por favor, digite APENAS O DIA (DOIS DÍGITOS) do primeiro pagamento do aluno (dia que as parcelas serão geradas)" << endl;
                int dia;
                cin >> dia;
                cin.ignore();
                system("cls");
                cout << "Por favor, digite APENAS O MÊS (DOIS DÍGITOS) do primeiro pagamento do aluno." << endl;
                int mes;
                cin >> mes;
                cin.ignore();
                system("cls");
                cout << "Por favor, digite APENAS O ANO (QUATRO DÍGITOS) do primeiro pagamento do aluno." << endl;
                int ano;
                cin >> ano;
                cin.ignore();
                system("cls");

                a1->setPagamento(dia,mes,ano);
                a1->geraParcelas();

                manager->cadastraAluno(a1);
                cout << "Aluno " << nome << " cadastrado com sucesso!\n" << endl;
                }
                break;
            case 2:{
                break;
            }
            case 3:
                manager->consultaAluno();
                manager->pagto();
                break;
            case 4:{
                manager->cancelaPagto();
                break;
            }
            case 5:{
                manager->consultaAluno();
                break;
            }
            case 6:{
                cout << "Para consultar todos os alunos, aperte ENTER, quando for solicitado o nome do aluno." << endl;
                manager->consultaAluno();
                break;
            }
            case 7:{
                manager->consultaAluno();
                cout << "Por favor, digite o CPF do aluno que será removido." << endl;
                string c;
                cin >> c;
                manager->removeAluno(c);
                break;
            }
            case 8:{
                //salvamento de arquivo
                return 0;
            }
            default:
                break;
            }
    }

/*
    SistemaAlunos *manager = new SistemaAlunos();
    Aluno *a1 = new Aluno("Daniel Cassiano", "417596", "Borborema", "Rua Aderaldo Silveira de Souza", "998354294");
    a1->setPagamento(20,03,2020);
    a1->geraParcelas();
    Aluno *a2 = new Aluno("Antônio Cassiano", "456654", "Borborema", "Rua Aderaldo Silveira de Souza", "998354294");
    a2->setPagamento(31,03,2020);
    a2->geraParcelas();
    Aluno *a3 = new Aluno("Auricélia Moura", "43212", "Serraria", "Rua Aderaldo Silveira de Souza", "998354294");
    a3->setPagamento(10,02,2020);
    a3->geraParcelas();
    manager->cadastraAluno(a1);
    manager->cadastraAluno(a2);
    manager->cadastraAluno(a3);
    manager->visualizarAlunos();
    manager->consultaAluno();
    manager->pagto();
    manager->consultaAluno();
    manager->cancelaPagto();
    manager->consultaAluno();
*/
    return 0;
}
