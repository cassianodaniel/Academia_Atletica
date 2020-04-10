#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale>
#include <fstream>
#include <ios>

#include "Dados.h"
#include "Pagamentos.h"
#include "Aluno.h"
#include "SistemaAlunos.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    SistemaAlunos *manager = new SistemaAlunos();

    //VARIÁVEIS PARA SALVAMENTO DE ARQUIVO
    string nome2, cpf2, cidade2, endereco2, telefone2;                                                                                                                    //dados.h
    bool Ativo2;                                                                                                                                                          //dados.h
    int Dia2, Mes2, Ano2;                                                                                                                                                 //pagamentos.h
    int Janeiro2, Fevereiro2, Marco2, Abril2, Maio2, Junho2, Julho2, Agosto2, Setembro2, Outubro2, Novembro2, Dezembro2;                                                  //pagamentos.h
    int DiaOriginal2, MesOriginal2, AnoOriginal2;                                                                                                                         //pagamentos.h
    bool JaneiroPago2, FevereiroPago2, MarcoPago2, AbrilPago2, MaioPago2, JunhoPago2, JulhoPago2, AgostoPago2, SetembroPago2, OutubroPago2, NovembroPago2, DezembroPago2; //pagamentos.h

    ifstream arquivo;
    arquivo.open("academia.txt");

    //LEITURA DE ARQUIVO
    while (1)
    {
        Aluno *p = new Aluno();
        Dados dados = Dados();
        arquivo >> Ativo2;
        p->ativo = Ativo2;

        //_____________________________VARIÁVEIS ENDERECO e ATIVO (DADOS)

        getline(arquivo, nome2);
        p->nome = nome2;

        getline(arquivo, cidade2);
        p->cidade = cidade2;

        getline(arquivo, cpf2);
        p->cpf = cpf2;

        getline(arquivo, endereco2);
        p->endereco = endereco2;

        getline(arquivo, telefone2);
        p->telefone = telefone2;

        //__________________________VARIÁVEIS DATA e DATA ORIGINAL

        arquivo >> Ano2;
        p->Ano = Ano2;

        arquivo >> AnoOriginal2;
        p->AnoOriginal = AnoOriginal2;

        arquivo >> Mes2;
        p->setMes(Mes2);

        arquivo >> MesOriginal2;
        p->MesOriginal = MesOriginal2;

        arquivo >> Dia2;
        p->Dia = Dia2;

        arquivo >> DiaOriginal2;
        p->DiaOriginal = DiaOriginal2;

        //________________________VARIÁVEIS MÊS

        arquivo >> Janeiro2;
        p->Janeiro = Janeiro2;

        arquivo >> Fevereiro2;
        p->Fevereiro = Fevereiro2;

        arquivo >> Marco2;
        p->Marco = Marco2;

        arquivo >> Abril2;
        p->Abril = Abril2;

        arquivo >> Maio2;
        p->Maio = Maio2;

        arquivo >> Junho2;
        p->Junho = Junho2;

        arquivo >> Julho2;
        p->Julho = Julho2;

        arquivo >> Agosto2;
        p->Agosto = Agosto2;

        arquivo >> Setembro2;
        p->Setembro = Setembro2;

        arquivo >> Outubro2;
        p->Outubro = Outubro2;

        arquivo >> Novembro2;
        p->Novembro = Novembro2;

        arquivo >> Dezembro2;
        p->Dezembro = Dezembro2;

        //___________________________ VARIÁVEIS MÊS PAGOS

        arquivo >> JaneiroPago2;
        p->Janeiro = JaneiroPago2;

        arquivo >> FevereiroPago2;
        p->Fevereiro = FevereiroPago2;

        arquivo >> MarcoPago2;
        p->Marco = MarcoPago2;

        arquivo >> AbrilPago2;
        p->Abril = AbrilPago2;

        arquivo >> MaioPago2;
        p->Maio = MaioPago2;

        arquivo >> JunhoPago2;
        p->Junho = JunhoPago2;

        arquivo >> JulhoPago2;
        p->Julho = JulhoPago2;

        arquivo >> AgostoPago2;
        p->Agosto = AgostoPago2;

        arquivo >> SetembroPago2;
        p->Setembro = SetembroPago2;

        arquivo >> OutubroPago2;
        p->Outubro = OutubroPago2;

        arquivo >> NovembroPago2;
        p->Novembro = NovembroPago2;

        arquivo >> DezembroPago2;
        p->Dezembro = DezembroPago2;

        if (arquivo.eof() || arquivo.bad() || arquivo.fail())
        {
            break;
        }

        p->setPagamento(Dia2, Mes2, Ano2);
        p->geraParcelas();

        manager->alunos.push_back(p);
    }
    arquivo.close();

    int menu = 0;
    while (menu != 9)
    {
        cout << "Bem-vindo ao programa de gerenciamento da Academia Atlética!" << endl;
        cout << "Por favor, digite a opção desejada:" << endl;
        cout << "1: Cadastrar novo aluno." << endl;
        cout << "2: Editar cadastro de aluno." << endl;
        cout << "3: Cadastrar novo pagamento." << endl;
        cout << "4: Cancelar pagamento." << endl;
        cout << "5: Consultar situação de aluno." << endl;
        cout << "6: Visualizar todos os alunos cadastrados." << endl;
        cout << "7: Remover aluno cadastrado." << endl;
        cout << "8: Fechar programa e salvar alterações/dados.\n"
             << endl;
        cout << ("Atenção! Apenas saia do programa utilizando o comando sair!\n\n");
        cin >> menu;
        cin.ignore();
        system("cls");
        switch (menu)
        {
        case 1:
        {
            cout << "Por favor, digite o nome do(a) aluno(a) a ser cadastrado.\n"
                 << endl;
            string nome;
            getline(cin, nome);
            system("cls");
            cout << "Por favor, digite o CPF do(a) aluno(a) a ser cadastrado.\n"
                 << endl;
            string cpf;
            getline(cin, cpf);
            system("cls");
            cout << "Por favor, digite a cidade do(a) aluno(a) a ser cadastrado.\n"
                 << endl;
            string cidade;
            getline(cin, cidade);
            system("cls");
            cout << "Por favor, digite o endereço do(a) aluno(a) a ser cadastrado.\n"
                 << endl;
            string endereco;
            getline(cin, endereco);
            system("cls");
            cout << "Por favor, digite o telefone do(a) aluno(a) a ser cadastrado.\n"
                 << endl;
            string telefone;
            getline(cin, telefone);
            system("cls");
            Aluno *a1 = new Aluno(nome, cpf, cidade, endereco, telefone);

            cout << "Por favor, digite apenas o dia (DOIS DÍGITOS) do primeiro pagamento \n do aluno (dia que as parcelas serão geradas)\n"
                 << endl;
            int dia;
            cin >> dia;
            cin.ignore();
            system("cls");
            cout << "Por favor, digite apenas o mês (DOIS DÍGITOS) do primeiro pagamento do aluno.\n"
                 << endl;
            int mes;
            cin >> mes;
            cin.ignore();
            system("cls");
            cout << "Por favor, digite apenas o ano (QUATRO DÍGITOS) do primeiro pagamento do aluno.\n"
                 << endl;
            int ano;
            cin >> ano;
            cin.ignore();
            system("cls");

            a1->setPagamento(dia, mes, ano);
            a1->geraParcelas();

            manager->cadastraAluno(a1);
            cout << "Aluno " << nome << " cadastrado com sucesso!\n"
                 << endl;
        }
        break;
        case 2:
        {
            manager->consultaAluno();
            cout << "Por favor, digite o CPF do aluno que será editado.\n"
                 << endl;
            string c;
            cin >> c;
            manager->editaAluno(c);
            break;
        }
        case 3:
            manager->consultaAluno();
            manager->pagto();
            break;
        case 4:
        {
            manager->consultaAluno();
            manager->cancelaPagto();
            break;
        }
        case 5:
        {
            manager->consultaAluno();
            break;
        }
        case 6:
        {
            manager->visualizarAlunos();
            break;
        }
        case 7:
        {
            manager->consultaAluno();
            cout << "Por favor, digite o CPF do aluno que será removido." << endl;
            string c;
            cin >> c;
            manager->removeAluno(c);
            break;
        }
        case 8:
        {
                fstream arquivo;
                arquivo.open("academia.txt", ios::out | ios::trunc);
                for (unsigned int i = 0; i < manager->alunos.size(); i++)
                {

                    if ((!manager->alunos[i]->ativo) || (manager->alunos[i]->nome == ""))
                    {
                        continue;
                    }
                    arquivo << (manager->alunos[i]->ativo);
                    arquivo << (manager->alunos[i]->nome) << endl;
                    arquivo << (manager->alunos[i]->cidade) << endl;
                    arquivo << (manager->alunos[i]->cpf) << endl;
                    arquivo << (manager->alunos[i]->endereco) << endl;
                    arquivo << (manager->alunos[i]->telefone) << endl;

                    arquivo << manager->alunos[i]->Ano << endl;
                    arquivo << manager->alunos[i]->AnoOriginal << endl;
                    arquivo << manager->alunos[i]->Mes << endl;
                    arquivo << manager->alunos[i]->MesOriginal << endl;
                    arquivo << manager->alunos[i]->Dia << endl;
                    arquivo << manager->alunos[i]->DiaOriginal << endl;

                    arquivo << manager->alunos[i]->Janeiro << endl;
                    arquivo << manager->alunos[i]->Fevereiro << endl;
                    arquivo << manager->alunos[i]->Marco << endl;
                    arquivo << manager->alunos[i]->Abril << endl;
                    arquivo << manager->alunos[i]->Maio << endl;
                    arquivo << manager->alunos[i]->Junho << endl;
                    arquivo << manager->alunos[i]->Julho << endl;
                    arquivo << manager->alunos[i]->Agosto << endl;
                    arquivo << manager->alunos[i]->Setembro << endl;
                    arquivo << manager->alunos[i]->Outubro << endl;
                    arquivo << manager->alunos[i]->Novembro << endl;
                    arquivo << manager->alunos[i]->Dezembro << endl;

                    arquivo << manager->alunos[i]->JaneiroPago << endl;
                    arquivo << manager->alunos[i]->FevereiroPago << endl;
                    arquivo << manager->alunos[i]->MarcoPago << endl;
                    arquivo << manager->alunos[i]->AbrilPago << endl;
                    arquivo << manager->alunos[i]->MaioPago << endl;
                    arquivo << manager->alunos[i]->JunhoPago << endl;
                    arquivo << manager->alunos[i]->JulhoPago << endl;
                    arquivo << manager->alunos[i]->AgostoPago << endl;
                    arquivo << manager->alunos[i]->SetembroPago << endl;
                    arquivo << manager->alunos[i]->OutubroPago << endl;
                    arquivo << manager->alunos[i]->NovembroPago << endl;
                    arquivo << manager->alunos[i]->DezembroPago << endl;
                }
                arquivo.close();
                return 1;
        }
        default:
            break;
        }
    } //endcase
    return 0;
}
