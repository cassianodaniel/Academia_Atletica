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
        if(alunos[i].ativo == true){
        cout << "Aluno [" << i+1 << "]: " << alunos[i].nome << " ";
        cout << "Cidade: " << alunos[i].cidade << " ";
        cout << "CPF: " << alunos[i].cpf << endl;
        cout << "Endereço: " << alunos[i].endereco << endl;
        cout << "Telefone: " << alunos[i].telefone << endl;
        cout << "-----------------------------------------------------------" << endl;
        }
    }
}

void SistemaAlunos::cadastraAluno(Aluno *al){
    alunos.push_back(*al);
}

void SistemaAlunos::consultaAluno(){
    cout << "Por favor, digite o NOME do aluno desejado para consulta." << endl;
    string n;
    getline(cin, n);
    system("cls");
    for(unsigned int i = 0; i < this->alunos.size(); i++){
        transform(n.begin(),n.end(), n.begin(), ::tolower);
        transform(alunos[i].nome.begin(),alunos[i].nome.end(), alunos[i].nome.begin(), ::tolower);

        if(alunos[i].nome.find(n)!= std::string::npos){
            if(alunos[i].ativo == true){
                cout << "\n" << endl;
                cout << "Aluno [" << i+1 << "]: " << alunos[i].nome << " ";
                cout << "Cidade: " << alunos[i].cidade << " ";
                cout << "CPF: " << alunos[i].cpf << endl;
                cout << "Endereço: " << alunos[i].endereco << endl;
                cout << "Telefone: " << alunos[i].telefone << endl;
                cout << endl;
                cout << "Janeiro : " << alunos[i].Janeiro; if(alunos[i].JaneiroPago == true){cout << " OK";};
                cout << endl;
                cout << "Fevereiro : " << alunos[i].Fevereiro; if(alunos[i].FevereiroPago == true){cout << " OK";};
                cout << endl;
                cout << "Marco : " << alunos[i].Marco; if(alunos[i].MarcoPago == true){cout << " OK";};
                cout << endl;
                cout << "Abril : " << alunos[i].Abril; if(alunos[i].AbrilPago == true){cout << " OK";};
                cout << endl;
                cout << "Maio : " << alunos[i].Maio; if(alunos[i].MaioPago == true){cout << " OK";};
                cout << endl;
                cout << "Junho : " << alunos[i].Junho; if(alunos[i].JunhoPago == true){cout << " OK";};
                cout << endl;
                cout << "Julho : " << alunos[i].Julho; if(alunos[i].JulhoPago == true){cout << " OK";};
                cout << endl;
                cout << "Agosto : " << alunos[i].Agosto; if(alunos[i].AgostoPago == true){cout << " OK";};
                cout << endl;
                cout << "Setembro : " << alunos[i].Setembro; if(alunos[i].SetembroPago == true){cout << " OK";};
                cout << endl;
                cout << "Outubro : " << alunos[i].Outubro; if(alunos[i].OutubroPago == true){cout << " OK";};
                cout << endl;
                cout << "Novembro : " << alunos[i].Novembro; if(alunos[i].NovembroPago == true){cout << " OK";};
                cout << endl;
                cout << "Dezembro : " << alunos[i].Dezembro; if(alunos[i].Dezembro == true){cout << " OK";};
                cout << endl;
                cout << "-----------------------------------------------------------" << endl;
            }
        }
    }
}

void SistemaAlunos::pagto(){
    cout << "Por favor, digite o NOME COMPLETO do aluno OU o CPF" << endl;
    cout << "exatamente da forma em que este encontra-se cadastrado. \n" << endl;
    string nouc;
    getline(cin, nouc);
    system("cls");
    transform(nouc.begin(),nouc.end(), nouc.begin(), ::tolower);
    for(unsigned int i=0; i < alunos.size(); i++){
        transform(alunos[i].nome.begin(),alunos[i].nome.end(), alunos[i].nome.begin(), ::tolower);
        if(nouc == alunos[i].nome || nouc == alunos[i].cpf){
            if(alunos[i].ativo == true){
                cout << "Aluno [" << i+1 << "]: " << alunos[i].nome << " ";
                cout << "Cidade: " << alunos[i].cidade << " ";
                cout << "CPF: " << alunos[i].cpf << endl;
                cout << "Endereço: " << alunos[i].endereco << endl;
                cout << "Telefone: " << alunos[i].telefone << endl;
                cout << endl;
                cout << "Janeiro : " << alunos[i].Janeiro; if(alunos[i].JaneiroPago == true){cout << " OK";};
                cout << endl;
                cout << "Fevereiro : " << alunos[i].Fevereiro; if(alunos[i].FevereiroPago == true){cout << " OK";};
                cout << endl;
                cout << "Marco : " << alunos[i].Marco; if(alunos[i].MarcoPago == true){cout << " OK";};
                cout << endl;
                cout << "Abril : " << alunos[i].Abril; if(alunos[i].AbrilPago == true){cout << " OK";};
                cout << endl;
                cout << "Maio : " << alunos[i].Maio; if(alunos[i].MaioPago == true){cout << " OK";};
                cout << endl;
                cout << "Junho : " << alunos[i].Junho; if(alunos[i].JunhoPago == true){cout << " OK";};
                cout << endl;
                cout << "Julho : " << alunos[i].Julho; if(alunos[i].JulhoPago == true){cout << " OK";};
                cout << endl;
                cout << "Agosto : " << alunos[i].Agosto; if(alunos[i].AgostoPago == true){cout << " OK";};
                cout << endl;
                cout << "Setembro : " << alunos[i].Setembro; if(alunos[i].SetembroPago == true){cout << " OK";};
                cout << endl;
                cout << "Outubro : " << alunos[i].Outubro; if(alunos[i].OutubroPago == true){cout << " OK";};
                cout << endl;
                cout << "Novembro : " << alunos[i].Novembro; if(alunos[i].NovembroPago == true){cout << " OK";};
                cout << endl;
                cout << "Dezembro : " << alunos[i].Dezembro; if(alunos[i].Dezembro == true){cout << " OK";};
                cout << endl;
                cout << "-----------------------------------------------------------" << endl;
                cout << "Por favor, digite o mês de pagamento a ser debitado." << endl;
                string mes;
                getline(cin,mes);
                cout << "Por favor, digite a DATA de pagamento apenas com números (20032020)." << endl;
                int data;
                cin >> data;
                if(mes=="Janeiro" || mes=="janeiro" || mes=="JANEIRO"){
                    alunos[i].Janeiro = data;
                    alunos[i].JaneiroPago = true;
                }
                if(mes=="Fevereiro" || mes=="fevereiro" || mes=="FEVEREIRO"){
                    alunos[i].Fevereiro = data;
                    alunos[i].FevereiroPago = true;
                }
                if(mes=="Março" || mes=="março" || mes=="MARÇO" || mes=="Marco" || mes=="MARCO" || mes == "marco"){
                    alunos[i].Marco = data;
                    alunos[i].MarcoPago = true;
                }
                if(mes=="Abril" || mes=="abril" || mes=="ABRIL"){
                    alunos[i].Abril = data;
                    alunos[i].AbrilPago = true;
                }
                if(mes=="Maio" || mes=="maio" || mes=="MAIO"){
                    alunos[i].Maio = data;
                    alunos[i].MaioPago = true;
                }
                if(mes=="Junho" || mes=="junho" || mes=="JUNHO"){
                    alunos[i].Junho = data;
                    alunos[i].JunhoPago = true;
                }
                if(mes=="Julho" || mes=="julho" || mes=="JULHO"){
                    alunos[i].Julho = data;
                    alunos[i].JulhoPago = true;
                }
                if(mes=="Agosto" || mes=="agosto" || mes=="AGOSTO"){
                    alunos[i].Agosto = data;
                    alunos[i].AgostoPago = true;
                }
                if(mes=="Setembro" || mes=="setembro" || mes=="SETEMBRO"){
                    alunos[i].Setembro = data;
                    alunos[i].SetembroPago = true;
                }
                if(mes=="Outubro" || mes=="outubro" || mes=="OUTUBRO"){
                    alunos[i].Outubro = data;
                    alunos[i].OutubroPago = true;
                }
                if(mes=="Novembro" || mes=="novembro" || mes=="NOVEMBRO"){
                    alunos[i].Novembro = data;
                    alunos[i].NovembroPago = true;
                }
                if(mes=="Dezembro" || mes=="dezembro" || mes=="DEZEMBRO"){
                    alunos[i].Dezembro = data;
                    alunos[i].DezembroPago = true;
                }
                cout << "Pagamento efetuado com sucesso!" << endl;
                cin.ignore();
            }
        }
    }
}

void SistemaAlunos::cancelaPagto(){
    cout << "Por favor, digite o NOME do aluno OU o CPF da mesma forma em que estes encontram-se cadastrados." << endl;
    cout << "(NOME COMPLETO DE ACORDO COM O CADASTRO)" << endl;
    string nouc;
    getline(cin, nouc);
    system("cls");
    transform(nouc.begin(),nouc.end(), nouc.begin(), ::tolower);
    for(unsigned int i=0; i < alunos.size(); i++){
        transform(alunos[i].nome.begin(),alunos[i].nome.end(), alunos[i].nome.begin(), ::tolower);
        if(nouc == alunos[i].nome || nouc == alunos[i].cpf){
            if(alunos[i].ativo == true){
                cout << "Aluno [" << i+1 << "]: " << alunos[i].nome << " ";
                cout << "Cidade: " << alunos[i].cidade << " ";
                cout << "CPF: " << alunos[i].cpf << endl;
                cout << "Endereço: " << alunos[i].endereco << endl;
                cout << "Telefone: " << alunos[i].telefone << endl;
                cout << endl;
                cout << "Janeiro : " << alunos[i].Janeiro; if(alunos[i].JaneiroPago == true){cout << " OK";};
                cout << endl;
                cout << "Fevereiro : " << alunos[i].Fevereiro; if(alunos[i].FevereiroPago == true){cout << " OK";};
                cout << endl;
                cout << "Marco : " << alunos[i].Marco; if(alunos[i].MarcoPago == true){cout << " OK";};
                cout << endl;
                cout << "Abril : " << alunos[i].Abril; if(alunos[i].AbrilPago == true){cout << " OK";};
                cout << endl;
                cout << "Maio : " << alunos[i].Maio; if(alunos[i].MaioPago == true){cout << " OK";};
                cout << endl;
                cout << "Junho : " << alunos[i].Junho; if(alunos[i].JunhoPago == true){cout << " OK";};
                cout << endl;
                cout << "Julho : " << alunos[i].Julho; if(alunos[i].JulhoPago == true){cout << " OK";};
                cout << endl;
                cout << "Agosto : " << alunos[i].Agosto; if(alunos[i].AgostoPago == true){cout << " OK";};
                cout << endl;
                cout << "Setembro : " << alunos[i].Setembro; if(alunos[i].SetembroPago == true){cout << " OK";};
                cout << endl;
                cout << "Outubro : " << alunos[i].Outubro; if(alunos[i].OutubroPago == true){cout << " OK";};
                cout << endl;
                cout << "Novembro : " << alunos[i].Novembro; if(alunos[i].NovembroPago == true){cout << " OK";};
                cout << endl;
                cout << "Dezembro : " << alunos[i].Dezembro; if(alunos[i].Dezembro == true){cout << " OK";};
                cout << endl;
                cout << "-----------------------------------------------------------" << endl;
                cout << "Por favor, digite o mês de pagamento a ser removido." << endl;
                string mes;
                cin >> mes;
                if(mes=="Janeiro" || mes=="janeiro" || mes=="JANEIRO"){
                    alunos[i].JaneiroPago = false;
                    alunos[i].Janeiro = alunos[i].DiaOriginal;
                }
                if(mes=="Fevereiro" || mes=="fevereiro" || mes=="FEVEREIRO"){
                    alunos[i].FevereiroPago = false;
                }
                if(mes=="Março" || mes=="março" || mes=="MARÇO"){
                    alunos[i].MarcoPago = false;
                }
                if(mes=="Abril" || mes=="abril" || mes=="ABRIL"){
                    alunos[i].AbrilPago = false;
                }
                if(mes=="Maio" || mes=="maio" || mes=="MAIO"){
                    alunos[i].MaioPago = false;
                }
                if(mes=="Junho" || mes=="junho" || mes=="JUNHO"){
                    alunos[i].JunhoPago = false;
                }
                if(mes=="Julho" || mes=="julho" || mes=="JULHO"){
                    alunos[i].JulhoPago = false;
                }
                if(mes=="Agosto" || mes=="agosto" || mes=="AGOSTO"){
                    alunos[i].AgostoPago = false;
                }
                if(mes=="Setembro" || mes=="setembro" || mes=="SETEMBRO"){
                    alunos[i].SetembroPago = false;
                }
                if(mes=="Outubro" || mes=="outubro" || mes=="OUTUBRO"){
                    alunos[i].OutubroPago = false;
                }
                if(mes=="Novembro" || mes=="novembro" || mes=="NOVEMBRO"){
                    alunos[i].NovembroPago = false;
                }
                if(mes=="Dezembro" || mes=="dezembro" || mes=="DEZEMBRO"){
                    alunos[i].DezembroPago = false;
                }
                cout << "Remoção de pagamento efetuado com sucesso!" << endl;
                cin.ignore();
            }
        }
    }
}

void SistemaAlunos::removeAluno(string c){
    for(unsigned int i=0; i < alunos.size(); i++){
        if(alunos[i].cpf == c){
            cout << "Você deseja confirmar a remoção do aluno " << alunos[i].nome << "?\n" << endl;
            cout << "1. SIM" << endl;
            cout << "2. NÃO" << endl;
            int j;
            cin >> j;
            if(j == 1){
                alunos[i].ativo = false;
                cout << "Aluno " << alunos[i].nome << " removido com sucesso! \n" << endl;
            }
            if(j == 2){
                alunos[i].ativo = true;
                cout << "Aluno " << alunos[i].nome << " não removido!" << endl;
                cout << "Operação cancelada.\n" << endl;
            }
        }
    }
}
