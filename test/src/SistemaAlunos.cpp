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
        if(alunos[i]->nome == ""){continue;} //sem nome
        if(alunos[i]->ativo == true){
        cout << "Aluno [" << i << "]: " << alunos[i]->nome << endl;
        cout << "Cidade: " << alunos[i]->cidade << endl;
        cout << "CPF: " << alunos[i]->cpf << endl;
        cout << "Endereço: " << alunos[i]->endereco << endl;
        cout << "Telefone: " << alunos[i]->telefone << endl;
        cout << "-----------------------------------------------------------" << endl;
        }
    }
}

void SistemaAlunos::cadastraAluno(Aluno *al){
    alunos.push_back(al);
}

void SistemaAlunos::consultaAluno(){
    cout << "Por favor, digite o NOME do aluno desejado para ser consultado." << endl;
    string n;
    getline(cin, n);
    system("cls");
    for(unsigned int i = 0; i < this->alunos.size(); i++){
        transform(n.begin(),n.end(), n.begin(), ::tolower);
        transform(alunos[i]->nome.begin(),alunos[i]->nome.end(), alunos[i]->nome.begin(), ::tolower);

        if(alunos[i]->nome.find(n)!= std::string::npos){
            if(alunos[i]->nome == ""){continue;} //sem nome
            if(alunos[i]->ativo == true){
                cout << "\n" << endl;
                cout << "Aluno [" << i << "]: " << alunos[i]->nome << endl;
                cout << "Cidade: " << alunos[i]->cidade << endl;
                cout << "CPF: " << alunos[i]->cpf << endl;
                cout << "Endereço: " << alunos[i]->endereco << endl;
                cout << "Telefone: " << alunos[i]->telefone << endl;
                cout << endl;
                cout << alunos[i]->Dia << "/" << alunos[i]->Mes << "/" << alunos[i]->Ano << endl;
                cout << endl;
                cout << "Janeiro : " << alunos[i]->Janeiro; if(alunos[i]->JaneiroPago == true){cout << " OK";};
                cout << endl;
                cout << "Fevereiro : " << alunos[i]->Fevereiro; if(alunos[i]->FevereiroPago == true){cout << " OK";};
                cout << endl;
                cout << "Marco : " << alunos[i]->Marco; if(alunos[i]->MarcoPago == true){cout << " OK";};
                cout << endl;
                cout << "Abril : " << alunos[i]->Abril; if(alunos[i]->AbrilPago == true){cout << " OK";};
                cout << endl;
                cout << "Maio : " << alunos[i]->Maio; if(alunos[i]->MaioPago == true){cout << " OK";};
                cout << endl;
                cout << "Junho : " << alunos[i]->Junho; if(alunos[i]->JunhoPago == true){cout << " OK";};
                cout << endl;
                cout << "Julho : " << alunos[i]->Julho; if(alunos[i]->JulhoPago == true){cout << " OK";};
                cout << endl;
                cout << "Agosto : " << alunos[i]->Agosto; if(alunos[i]->AgostoPago == true){cout << " OK";};
                cout << endl;
                cout << "Setembro : " << alunos[i]->Setembro; if(alunos[i]->SetembroPago == true){cout << " OK";};
                cout << endl;
                cout << "Outubro : " << alunos[i]->Outubro; if(alunos[i]->OutubroPago == true){cout << " OK";};
                cout << endl;
                cout << "Novembro : " << alunos[i]->Novembro; if(alunos[i]->NovembroPago == true){cout << " OK";};
                cout << endl;
                cout << "Dezembro : " << alunos[i]->Dezembro; if(alunos[i]->Dezembro == true){cout << " OK";};
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
        transform(alunos[i]->nome.begin(),alunos[i]->nome.end(), alunos[i]->nome.begin(), ::tolower);
        if(nouc == alunos[i]->nome || nouc == alunos[i]->cpf){
            if(alunos[i]->nome == ""){continue;} //sem nome
            if(alunos[i]->ativo == true){
                cout << "Aluno [" << i << "]: " << alunos[i]->nome << endl;
                cout << "Cidade: " << alunos[i]->cidade << endl;
                cout << "CPF: " << alunos[i]->cpf << endl;
                cout << "Endereço: " << alunos[i]->endereco << endl;
                cout << "Telefone: " << alunos[i]->telefone << endl;
                cout << endl;
                cout << "Janeiro : " << alunos[i]->Janeiro; if(alunos[i]->JaneiroPago == true){cout << " OK";};
                cout << endl;
                cout << "Fevereiro : " << alunos[i]->Fevereiro; if(alunos[i]->FevereiroPago == true){cout << " OK";};
                cout << endl;
                cout << "Marco : " << alunos[i]->Marco; if(alunos[i]->MarcoPago == true){cout << " OK";};
                cout << endl;
                cout << "Abril : " << alunos[i]->Abril; if(alunos[i]->AbrilPago == true){cout << " OK";};
                cout << endl;
                cout << "Maio : " << alunos[i]->Maio; if(alunos[i]->MaioPago == true){cout << " OK";};
                cout << endl;
                cout << "Junho : " << alunos[i]->Junho; if(alunos[i]->JunhoPago == true){cout << " OK";};
                cout << endl;
                cout << "Julho : " << alunos[i]->Julho; if(alunos[i]->JulhoPago == true){cout << " OK";};
                cout << endl;
                cout << "Agosto : " << alunos[i]->Agosto; if(alunos[i]->AgostoPago == true){cout << " OK";};
                cout << endl;
                cout << "Setembro : " << alunos[i]->Setembro; if(alunos[i]->SetembroPago == true){cout << " OK";};
                cout << endl;
                cout << "Outubro : " << alunos[i]->Outubro; if(alunos[i]->OutubroPago == true){cout << " OK";};
                cout << endl;
                cout << "Novembro : " << alunos[i]->Novembro; if(alunos[i]->NovembroPago == true){cout << " OK";};
                cout << endl;
                cout << "Dezembro : " << alunos[i]->Dezembro; if(alunos[i]->Dezembro == true){cout << " OK";};
                cout << endl;
                cout << "-----------------------------------------------------------" << endl;
                cout << "Por favor, digite o mês de pagamento a ser debitado." << endl;
                string mes;
                getline(cin,mes);
                cout << "Por favor, digite a DATA de pagamento apenas com números (20032020)." << endl;
                int data;
                cin >> data;
                if(mes=="Janeiro" || mes=="janeiro" || mes=="JANEIRO"){
                    alunos[i]->Janeiro = data;
                    alunos[i]->JaneiroPago = true;
                }
                if(mes=="Fevereiro" || mes=="fevereiro" || mes=="FEVEREIRO"){
                    alunos[i]->Fevereiro = data;
                    alunos[i]->FevereiroPago = true;
                }
                if(mes=="Março" || mes=="março" || mes=="MARÇO" || mes=="Marco" || mes=="MARCO" || mes == "marco"){
                    alunos[i]->Marco = data;
                    alunos[i]->MarcoPago = true;
                }
                if(mes=="Abril" || mes=="abril" || mes=="ABRIL"){
                    alunos[i]->Abril = data;
                    alunos[i]->AbrilPago = true;
                }
                if(mes=="Maio" || mes=="maio" || mes=="MAIO"){
                    alunos[i]->Maio = data;
                    alunos[i]->MaioPago = true;
                }
                if(mes=="Junho" || mes=="junho" || mes=="JUNHO"){
                    alunos[i]->Junho = data;
                    alunos[i]->JunhoPago = true;
                }
                if(mes=="Julho" || mes=="julho" || mes=="JULHO"){
                    alunos[i]->Julho = data;
                    alunos[i]->JulhoPago = true;
                }
                if(mes=="Agosto" || mes=="agosto" || mes=="AGOSTO"){
                    alunos[i]->Agosto = data;
                    alunos[i]->AgostoPago = true;
                }
                if(mes=="Setembro" || mes=="setembro" || mes=="SETEMBRO"){
                    alunos[i]->Setembro = data;
                    alunos[i]->SetembroPago = true;
                }
                if(mes=="Outubro" || mes=="outubro" || mes=="OUTUBRO"){
                    alunos[i]->Outubro = data;
                    alunos[i]->OutubroPago = true;
                }
                if(mes=="Novembro" || mes=="novembro" || mes=="NOVEMBRO"){
                    alunos[i]->Novembro = data;
                    alunos[i]->NovembroPago = true;
                }
                if(mes=="Dezembro" || mes=="dezembro" || mes=="DEZEMBRO"){
                    alunos[i]->Dezembro = data;
                    alunos[i]->DezembroPago = true;
                }
                cout << "Pagamento efetuado com sucesso!\n" << endl;
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
        transform(alunos[i]->nome.begin(),alunos[i]->nome.end(), alunos[i]->nome.begin(), ::tolower);
        if(nouc == alunos[i]->nome || nouc == alunos[i]->cpf){
            if(alunos[i]->nome == ""){continue;} //sem nome
            if(alunos[i]->ativo == true){
                cout << "Aluno [" << i << "]: " << alunos[i]->nome << endl;
                cout << "Cidade: " << alunos[i]->cidade << endl;
                cout << "CPF: " << alunos[i]->cpf << endl;
                cout << "Endereço: " << alunos[i]->endereco << endl;
                cout << "Telefone: " << alunos[i]->telefone << endl;
                cout << endl;
                cout << "Janeiro : " << alunos[i]->Janeiro; if(alunos[i]->JaneiroPago == true){cout << " OK";};
                cout << endl;
                cout << "Fevereiro : " << alunos[i]->Fevereiro; if(alunos[i]->FevereiroPago == true){cout << " OK";};
                cout << endl;
                cout << "Marco : " << alunos[i]->Marco; if(alunos[i]->MarcoPago == true){cout << " OK";};
                cout << endl;
                cout << "Abril : " << alunos[i]->Abril; if(alunos[i]->AbrilPago == true){cout << " OK";};
                cout << endl;
                cout << "Maio : " << alunos[i]->Maio; if(alunos[i]->MaioPago == true){cout << " OK";};
                cout << endl;
                cout << "Junho : " << alunos[i]->Junho; if(alunos[i]->JunhoPago == true){cout << " OK";};
                cout << endl;
                cout << "Julho : " << alunos[i]->Julho; if(alunos[i]->JulhoPago == true){cout << " OK";};
                cout << endl;
                cout << "Agosto : " << alunos[i]->Agosto; if(alunos[i]->AgostoPago == true){cout << " OK";};
                cout << endl;
                cout << "Setembro : " << alunos[i]->Setembro; if(alunos[i]->SetembroPago == true){cout << " OK";};
                cout << endl;
                cout << "Outubro : " << alunos[i]->Outubro; if(alunos[i]->OutubroPago == true){cout << " OK";};
                cout << endl;
                cout << "Novembro : " << alunos[i]->Novembro; if(alunos[i]->NovembroPago == true){cout << " OK";};
                cout << endl;
                cout << "Dezembro : " << alunos[i]->Dezembro; if(alunos[i]->Dezembro == true){cout << " OK";};
                cout << endl;
                cout << "-----------------------------------------------------------" << endl;
                cout << "Por favor, digite o mês de pagamento a ser removido." << endl;
                string mes;
                cin >> mes;
                if(mes=="Janeiro" || mes=="janeiro" || mes=="JANEIRO"){
                    alunos[i]->JaneiroPago = false;
                    alunos[i]->Janeiro = alunos[i]->DiaOriginal;
                }
                if(mes=="Fevereiro" || mes=="fevereiro" || mes=="FEVEREIRO"){
                    alunos[i]->FevereiroPago = false;
                }
                if(mes=="Março" || mes=="março" || mes=="MARÇO"){
                    alunos[i]->MarcoPago = false;
                }
                if(mes=="Abril" || mes=="abril" || mes=="ABRIL"){
                    alunos[i]->AbrilPago = false;
                }
                if(mes=="Maio" || mes=="maio" || mes=="MAIO"){
                    alunos[i]->MaioPago = false;
                }
                if(mes=="Junho" || mes=="junho" || mes=="JUNHO"){
                    alunos[i]->JunhoPago = false;
                }
                if(mes=="Julho" || mes=="julho" || mes=="JULHO"){
                    alunos[i]->JulhoPago = false;
                }
                if(mes=="Agosto" || mes=="agosto" || mes=="AGOSTO"){
                    alunos[i]->AgostoPago = false;
                }
                if(mes=="Setembro" || mes=="setembro" || mes=="SETEMBRO"){
                    alunos[i]->SetembroPago = false;
                }
                if(mes=="Outubro" || mes=="outubro" || mes=="OUTUBRO"){
                    alunos[i]->OutubroPago = false;
                }
                if(mes=="Novembro" || mes=="novembro" || mes=="NOVEMBRO"){
                    alunos[i]->NovembroPago = false;
                }
                if(mes=="Dezembro" || mes=="dezembro" || mes=="DEZEMBRO"){
                    alunos[i]->DezembroPago = false;
                }
                cout << "Remoção de pagamento efetuado com sucesso! \n" << endl;
                cin.ignore();
            }
        }
    }
}

void SistemaAlunos::removeAluno(string c){
    for(unsigned int i=0; i < alunos.size(); i++){
        if(alunos[i]->cpf == c){
            cout << "Você deseja confirmar a remoção do aluno " << alunos[i]->nome << "?\n" << endl;
            cout << "1. SIM" << endl;
            cout << "2. NÃO" << endl;
            int j;
            cin >> j;
            if(j == 1){
                alunos[i]->ativo = false;
                cout << "Aluno " << alunos[i]->nome << " removido com sucesso! \n" << endl;
            }
            if(j == 2){
                alunos[i]->ativo = true;
                cout << "Aluno " << alunos[i]->nome << " não removido!" << endl;
                cout << "Operação cancelada.\n" << endl;
            }
        }
    }
}

void SistemaAlunos::editaAluno(string c){
    for(unsigned int i=0; i < alunos.size(); i++){
        if(alunos[i]->cpf == c){
            cout << "Você deseja editar o aluno " << alunos[i]->nome << "?\n" << endl;
            cout << "1. SIM" << endl;
            cout << "2. NÃO \n" << endl;
            int j;
            cin >> j;
            if(j == 1){
                system("cls");
                cout << "1. Editar nome\n" << endl;
                cout << "2. Editar cidade\n" << endl;
                cout << "3. Editar endereço\n" << endl;
                cout << "4. Editar telefone\n" << endl;
                cout << "5. Editar CPF\n" << endl;
                int k;
                cin >> k;
                cin.ignore();
                switch(k){
                    case 1:{
                        system("cls");
                        cout << "Por favor, digite o novo nome:\n" << endl;
                        string n;
                        getline(cin, n);
                        alunos[i]->nome = n;
                        if(alunos[i]->nome == n){
                            cout << "Nome alterado com sucesso!\n" << endl;
                        }else{
                            cout << "Erro em alterar o nome do aluno." << endl;
                        }
                    }
                    break;
                    case 2:{
                        system("cls");
                        cout << "Por favor, digite a nova cidade:\n" << endl;
                        string c;
                        getline(cin, c);
                        alunos[i]->cidade = c;;
                        if(alunos[i]->cidade == c){
                            cout << "Cidade alterada com sucesso!\n" << endl;
                        }else{
                            cout << "Erro em alterar cidade do aluno." << endl;
                        }
                    }
                    break;
                    case 3:{
                        system("cls");
                        cout << "Por favor, digite o novo endereço:\n" << endl;
                        string e;
                        getline(cin, e);
                        alunos[i]->endereco = e;
                        if(alunos[i]->endereco == e){
                            cout << "Endereco alterado com sucesso!\n" << endl;
                        }else{
                            cout << "Erro em alterar o endereco do aluno." << endl;
                        }
                    }
                    break;
                    case 4:{
                        system("cls");
                        cout << "Por favor, digite o novo telefone:\n" << endl;
                        string t;
                        getline(cin, t);
                        alunos[i]->telefone = t;
                        if(alunos[i]->telefone == t){
                            cout << "Telefone alterado com sucesso!\n" << endl;
                        }else{
                            cout << "Erro em alterar o novo telefone do aluno." << endl;
                        }
                    }
                    break;
                    case 5:{
                        system("cls");
                        cout << "Por favor, digite o novo CPF:\n" << endl;
                        string cp;
                        getline(cin, cp);
                        alunos[i]->cpf = cp;
                        if(alunos[i]->cpf == cp){
                            cout << "CPF alterado com sucesso!\n" << endl;
                        }else{
                            cout << "Erro em alterar o CPF do aluno." << endl;
                        }
                    }
                    break;
                }
            }
            if(j == 2){
                system("cls");
                cout << "Aluno " << alunos[i]->nome << " não editado!" << endl;
                cout << "Operação cancelada.\n" << endl;
            }
        }
    }
}
