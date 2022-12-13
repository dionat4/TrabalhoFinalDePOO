#include <iostream>
#include "jogadorGoleiro.h"
#include "jogadorPivo.h"
#include "jogadorFixo.h"
#include "Partidas.h"
#include "Time.h"
#include "jogadorReservaGoleiro.h"
#include "jogadorReservaPivo.h"
#include "jogadorReservaFixo.h"

using namespace std;

// essa função deve receber um vetor de ponteiros para Time, o tamanho do vetor, e os nomes dos times que já foram inscritos
// essa função deve imprimir os nomes dos times que ainda não foram inscritos no Campeonato

void substituirTime(Time *time[], int qtdTimes, string nomeTime, string nomeTimeSubstituto, Jogador* jogadores[]) {

    int index;
    for (int i = 0; i < qtdTimes; i++) {
        if (time[i]->getNome() == nomeTime) {
            index = i;
            break; 
        }
    }
    time[index] = new Time(nomeTimeSubstituto);
    time[index] -> insJogador(jogadores);
    cout << endl;
    cout << "O " << nomeTimeSubstituto << " esta pronto para jogar!!" << endl;
    cout << "O " << nomeTime << " foi removido" << endl;
}

int procuraJogador(Time* Campeonato[], int tamanho,  string nome){
    int cont = 0;
    for(int i = 0; i < tamanho; i++){
        if(Campeonato[i] -> getJogador1(nome) == true){
            cont++;
        }
    }
    return cont; 
}

void inscreveTime(Time *Campeonato[], int tamanho, string nome, Jogador* jogador[]){ //Essa função inscreve os times no campeonato 
    Campeonato[tamanho] = new Time(nome);
    Campeonato[tamanho] -> insJogador(jogador);
    system("cls");
    cout << endl;
    cout << "O Time " << nome << " esta pronto para jogar!!" << endl;
}

void mostraTime(Time* Campeonato[], int tamanho){ // Essa função mostra os times inscritos no campeonato
    for(int i = 0; i < tamanho; i++){
        cout << "- " << Campeonato[i]->getNome() << endl;
    }
    cout << endl;
}

int main() {

    Jogador *UFC[] = {
                        new JogadorPivo("Jeferson", 18, 10, 15, 10, 12, 13),
                        new JogadorPivo("Richarlison", 30, 100, 462, 10, 30, 30), 
                        new JogadorPivo("Vini", 30, 100, 462, 10, 30, 30), 
                        new JogadorFixo("Deivid", 20, 15, 0, 02, 15, 3), 
                        new JogadorGoleiro("Dionata", 18, 10, 0, 01, 12, 11),
                        new JogadorReservaPivo ("Yuri", 18, 10, 15, 10, 12, 13),
                        new JogadorReservaGoleiro ("Endel", 18, 10, 0, 01, 12, 11),
                        new JogadorReservaFixo ("Pedro", 20, 15, 0, 02, 15, 3)
                    };

    Jogador *IFCE[] = {
                           new JogadorPivo("Neymar", 30, 100, 462, 10, 30, 30),
                           new JogadorPivo("Julio", 30, 100, 462, 10, 30, 30), 
                           new JogadorPivo("Matias", 30, 100, 462, 10, 30, 30),
                           new JogadorFixo("Marquinhos", 28, 30, 384, 04, 25, 25),
                           new JogadorGoleiro("Alisson", 30, 10, 1, 01, 20, 20),
                           new JogadorReservaPivo ("Samuel", 18, 10, 15, 10, 12, 13),
                           new JogadorReservaGoleiro ("Carlos", 18, 10, 0, 01, 12, 11),
                           new JogadorReservaFixo ("Thiago", 20, 15, 0, 02, 15, 3)
                        };

    Jogador *UECE[] = {
                            new JogadorPivo("Alberto", 21, 50, 200, 10, 20, 20), 
                            new JogadorPivo("Riquelme", 30, 100, 462, 10, 30, 30), 
                            new JogadorPivo("Enzo", 30, 100, 462, 10, 30, 30),
                            new JogadorFixo("Gil", 35, 13, 75, 2, 15, 15), 
                            new JogadorGoleiro("Cassio", 35, 10, 10, 1, 15, 15),
                            new JogadorReservaPivo ("Rafa", 18, 10, 15, 10, 12, 13),
                            new JogadorReservaGoleiro ("Joao", 18, 10, 0, 1, 12, 11),
                            new JogadorReservaFixo ("Antonio", 20, 15, 0, 2, 15, 3)
                        };
    Jogador *CISNE[] = {
                            new JogadorPivo("Natanael", 21, 50, 200, 10, 20, 20), 
                            new JogadorPivo("Felipe", 30, 100, 462, 10, 30, 30), 
                            new JogadorPivo("Kaua", 30, 100, 462, 10, 30, 30),
                            new JogadorFixo("Eduardo", 35, 13, 75, 2, 15, 15), 
                            new JogadorGoleiro("Thomaz", 35, 10, 10, 1, 15, 15),
                            new JogadorReservaPivo ("Jeffin", 18, 10, 15, 10, 12, 13),
                            new JogadorReservaGoleiro ("Jhonata", 18, 10, 0, 1, 12, 11),
                            new JogadorReservaFixo ("Henrique", 20, 15, 0, 2, 15, 3)
                        };
    Jogador *ESTACIO[] = {
                            new JogadorPivo("Pretin", 21, 50, 200, 10, 20, 20), 
                            new JogadorPivo("Negao", 30, 100, 462, 10, 30, 30), 
                            new JogadorPivo("Arthur", 30, 100, 462, 10, 30, 30),
                            new JogadorFixo("Marcelo", 35, 13, 75, 2, 15, 15), 
                            new JogadorGoleiro("Gabriel", 35, 10, 10, 1, 15, 15),
                            new JogadorReservaPivo ("Lucas", 18, 10, 15, 10, 12, 13),
                            new JogadorReservaGoleiro ("Luan", 18, 10, 0, 1, 12, 11),
                            new JogadorReservaFixo ("David", 20, 15, 0, 2, 15, 3)
                        };
    Jogador *CATOLICA[] = {
                            new JogadorPivo("Salomao", 21, 50, 200, 10, 20, 20), 
                            new JogadorPivo("Israel", 30, 100, 462, 10, 30, 30), 
                            new JogadorPivo("Ezequiel", 30, 100, 462, 10, 30, 30),
                            new JogadorFixo("Moises", 35, 13, 75, 2, 15, 15), 
                            new JogadorGoleiro("Josue", 35, 10, 10, 1, 15, 15),
                            new JogadorReservaPivo ("Abraao", 18, 10, 15, 10, 12, 13),
                            new JogadorReservaGoleiro ("Isaque", 18, 10, 0, 1, 12, 11),
                            new JogadorReservaFixo ("Ismael", 20, 15, 0, 2, 15, 3)
                        };

    Time *Campeonato[6];
    int tamanho = 0;

    do{
        cout << endl;
        cout << "=================================================" << endl;
        cout << "|         SEJA BEM-VINDO AO SISTEMA             |" << endl;
        cout << "=================================================" << endl;
        cout << "|                                               |" << endl;
        cout << "|   (1) Para inscrever um time no campeonato    |" << endl;
        cout << "|   (2) Para exibir os times inscritos          |" << endl;
        cout << "|   (3) Substituir um time do campeonato        |" << endl;
        cout << "|   (4) Para iniciar a partida                  |" << endl;
        cout << "|   (5) Menu dos jogadores                      |" << endl;
        cout << "|   (10) Para finalizar o sistema               |" << endl;
        cout << "|                                               |" << endl;
        cout << "=================================================" << endl;
        cout << endl;

        string opcao;
        cout << "Digite a opcao desejada: ";

        cin >> opcao;
        
        if(opcao != "1" && opcao != "2" && opcao != "3" && opcao != "4" && opcao != "5" && opcao != "6" && opcao != "10") {
            cout << "Opcao invalida!" << endl;
            continue;
        }

        else {
            if (opcao == "1") {
                system("cls");
                cout << endl;
                cout << "=================================" << endl;
                cout << "|  BEM-VINDO AO MENU DOS TIMES  | " << endl;
                cout << "=================================" << endl;
                cout << "|       TIMES DISPONIVEIS       |" << endl;
                cout << "|          - UFC                |" << endl;
                cout << "|          - IFCE               |" << endl;
                cout << "|          - UECE               |" << endl;
                cout << "|          - CISNE              |" << endl;
                cout << "|          - ESTACIO            |" << endl;
                cout << "|          - CATOLICA           |" << endl;  
                cout << "=================================" << endl;
                cout << endl;
                string NomeTime;
                cout << "Qual time deseja inscrever? " << endl;
                cin >> NomeTime;
                if (NomeTime != "UFC" && NomeTime != "IFCE" && NomeTime != "UECE" && NomeTime != "CISNE" && NomeTime != "ESTACIO" && NomeTime != "CATOLICA") {
                    system("cls");
                    try {
                        cout << "Times invalidos, digite um dos times do menu dos times!!" << endl;
                    }
                    catch (const char *msg) {
                        cerr << msg << endl;
                    }
                }
                else {
                    if(NomeTime == "UFC") { //Chamar uma função para colocar o time dentro do campeonato
                        inscreveTime(Campeonato, tamanho, NomeTime, UFC);
                    }
                    else if(NomeTime == "IFCE"){ //Chamar uma função para colocar o time dentro do campeonato
                        inscreveTime(Campeonato, tamanho, NomeTime, IFCE);
                    }
                    else if(NomeTime == "UECE"){ //Chamar uma função para colocar o time dentro do campeonato
                        inscreveTime(Campeonato, tamanho, NomeTime, UECE);
                    }
                    else if (NomeTime == "CISNE") {
                        inscreveTime(Campeonato, tamanho, NomeTime, CISNE);
                        //cerr << "INSTITUICAO FALIDA, NAO FOI POSSIVEL CADASTRAR ESSE TIME!" << endl;
                    }
                    else if(NomeTime == "ESTACIO") {
                        inscreveTime(Campeonato, tamanho, NomeTime, ESTACIO);
                    }
                    else if (NomeTime == "CATOLICA") {
                        inscreveTime(Campeonato, tamanho, NomeTime, CATOLICA);
                    }
                    if(tamanho < 6) {
                        tamanho++;
                    }
                }
            }

            else if(opcao == "2") {
                system("cls");
                cout << endl;
                cout << "== TIMES INSCRITOS NO CAMPEONATO ==" << endl;
                        mostraTime(Campeonato, tamanho);
            }

            else if(opcao == "3") {
                if (tamanho == 0 || tamanho == 1) {
                    try {
                        system("cls");
                        cout << "Nao ha times suficientes para fazer a substituicao!!" << endl;
                    }
                    catch (const char *msg) {
                        cerr << msg << endl;
                    }
                }
                else {
                    string nomeTime;
                    string nomeTimeNovo;

                    cout << "== TIMES INSCRITOS NO CAMPEONATO ==" << endl;
                            mostraTime(Campeonato, tamanho);
                    cout << "===================================";
                    cout << endl;

                    cout << "Qual time voce deseja remover do campeonato" << endl;
                    cin >> nomeTime;
                    system("cls");

                    cout << "Qual time voce deseja colocar no campeonato" << endl;
                    cin >> nomeTimeNovo;
                    system("cls");

                    if(nomeTimeNovo == "UFC"){ //Chamar uma função para colocar o time dentro do campeonato
                        substituirTime(Campeonato, tamanho, nomeTime, nomeTimeNovo, UFC);
                    }
                    else if(nomeTimeNovo == "IFCE"){ //Chamar uma função para colocar o time dentro do campeonato
                        substituirTime(Campeonato, tamanho, nomeTime, nomeTimeNovo, IFCE);
                    }
                    else if(nomeTimeNovo == "UECE"){ //Chamar uma função para colocar o time dentro do campeonato
                        substituirTime(Campeonato, tamanho, nomeTime, nomeTimeNovo, UECE);
                    }
                    else if (nomeTimeNovo == "CISNE") {
                        substituirTime(Campeonato, tamanho, nomeTime, nomeTimeNovo, CISNE);
                        //cerr << "INSTITUICAO FALIDA!" << endl;
                    }
                    else if(nomeTimeNovo == "ESTACIO") {
                        substituirTime(Campeonato, tamanho, nomeTime, nomeTimeNovo, ESTACIO);
                    }
                    else if (nomeTimeNovo == "CATOLICA") {
                        substituirTime(Campeonato, tamanho, nomeTime, nomeTimeNovo, CATOLICA);
                    }
                    else {
                        system("cls");
                        try {
                            throw ("Times invalidos, digite um dos times do menu dos times!!");
                        }
                        catch (const char *msg) {
                            cerr << msg << endl;
                        }
                    }
                }
            }

            //OPÇÃO 4 DO MENU PRINCIPAL
            else if(opcao == "4") {
                system("cls");
                if (tamanho == 0 || tamanho == 1) {
                    try {
                        throw ("Voce precisa inscrever pelo menos dois times para iniciar uma partida!!");
                    }
                    catch (const char *msg) {
                        cerr << msg << endl;
                    }
                }
                else {
                    cout << "Digite a data desta partida (no formato dd mm aa): ";
                    int dia, mes, ano;
                    cin >> dia >> mes >> ano;
                    system("cls");
                    cout << "== TIMES INSCRITOS NO CAMPEONATO ==" << endl;
                        mostraTime(Campeonato, tamanho);
                    cout << "===================================" << endl;
                    string timeCasa, timeVisitante;
                    cout << "Digite qual eh o time da casa: ";
                    cin >> timeCasa;
                    cout << "Digite qual eh o time visitante: ";
                    cin >> timeVisitante;
                    system("cls");

                    int ProcuraCasa, ProcuraVisitante;
                    for(int i = 0; i < tamanho; i++){
                        if(Campeonato[i]->getNome() == timeCasa){
                            ProcuraCasa = i;
                        }
                        else if(Campeonato[i]->getNome() == timeVisitante){
                            ProcuraVisitante = i;
                        }
                    }

                    Partidas *partida = new Partidas(Campeonato[ProcuraCasa],Campeonato[ProcuraVisitante], dia, mes, ano);

                    do{ //Menu da partida
                        cout << "==================================================" << endl;
                        cout << "|         BEM-VINDO AO MENU DAS PARTIDAS         |" << endl;
                        cout << "|             QUE COMECE O AMISTOSO              |" << endl;
                        cout << "==================================================" << endl;
                        cout << "|                                                |" << endl;
                        cout << "|            (1) Gol do time da Casa             |" << endl;
                        cout << "|           (2) Gol do time Visitante            |" << endl;
                        cout << "|     (3) Para exibir o placar da partida        |" << endl;
                        cout << "| (4) Exibir o time da casa e o time Visitante   |" << endl;
                        cout << "|         (5) Para encerrar a partida            |" << endl;
                        cout << "|                                                |" << endl;
                        cout << "==================================================" << endl;
                        cout << endl;

                        string op;
                        cout << "Digite a opcao desejada: ";
                        cin >> op;
                        system("cls");

                         if(op != "1" && op != "2" && op != "3" && op != "4" && op != "5") {
                            cout << "Opcao invalida!" << endl;
                            continue;
                        }
                        
                        else{
                            if (op == "1") {
                                string jog;
                                cout << "+-------------------------------+" << endl;
                                Campeonato[ProcuraCasa] -> imprimeNome();
                                cout << "+-------------------------------+" << endl;
                                //cout << endl;
                                cout << "Que jogador marcou o gol?" << endl;
                                cin >> jog;
                                system("cls");
                                if(Campeonato[ProcuraCasa] -> getJogador1(jog) == false){
                                    cout << "Jogador invalido" << endl;
                                }
                                else{
                                    Jogador* aux = Campeonato[ProcuraCasa] -> getJogador(jog);
                                    aux -> somaGols();
                                    partida -> golCasa();
                                    cout << "QUE GOLACOOOO, O JOGO TA FICANDO BOMM!!" << endl;
                                }
                            }

                            else if (op == "2"){
                                string jog;
                                cout << "+-------------------------------+" << endl;
                                Campeonato[ProcuraVisitante] -> imprimeNome();
                                cout << "+-------------------------------+" << endl;
                                cout << "Que jogador marcou o gol?" << endl;
                                cin >> jog;
                                system("cls");
                                if(Campeonato[ProcuraVisitante] -> getJogador1(jog) == false){
                                    cout << "Jogador invalido" << endl;
                                }
                                else{
                                    Jogador* aux = Campeonato[ProcuraVisitante] -> getJogador(jog);
                                    aux -> somaGols();
                                    partida -> golVisitante();
                                    cout << "QUE GOLACOOOO, O JOGO TA FICANDO BOMM!!" << endl;
                                }

                            }

                            else if (op == "3"){
                                string Nome;
                                cout << "Digite o nome de algum dos times que estao jogando para exibir o placar da partida" << endl;
                                cin >> Nome;
                                system("cls");
                            
                                /*if(Campeonato[ProcuraCasa]->getGols() == 0 || Campeonato[ProcuraVisitante]->getGols() == 0) {
                                    cout << "== PLACAR DA PARTIDA ==" << endl;
                                    cout << Campeonato[ProcuraCasa]->getNome() << " 0" << " X " << "0 " << Campeonato[ProcuraVisitante]->getNome() << endl;
                                    cout << endl;
                                }*/
                                    if(Campeonato[ProcuraCasa]->getNome() == Nome || Campeonato[ProcuraVisitante]->getNome() == Nome) {
                                    system("cls");
                                    cout << "== PLACAR DA PARTIDA ==" << endl;
                                    cout << partida->getPlacar() << endl;
                                    }
                                    else {
                                        try {
                                            throw ("Times invalidos");
                                        }
                                        catch(const char * msg) {
                                            cerr << "Error: " << msg << endl;
                                        }
                                    }
                                
                            }
                            else if (op == "4"){
                                string Nome;
                                cout << "Digite o nome de algum dos times que estao jogando para descobri quem eh o time da casa e o visitante" << endl;
                                cin >> Nome;
                                system("cls");

                                if(Nome == partida->getCasa()) {
                                    cout << Nome << " eh o time da casa" << endl;
                                }
                                else if(Nome == partida->getVisitante()) {
                                    cout << Nome << " eh o time visitante" << endl;
                                }
                                else{
                                    cerr << "Error 202" << endl;
                                }
                            }

                            else if (op == "5"){

                                cout << "== RESULTADO DA PARTIDA ==" << endl;
                                cout << endl;
                                cout << partida->getPlacar() << endl;

                                Time* aux1 = Campeonato[ProcuraCasa];
                                Time* aux2 = Campeonato[ProcuraVisitante];
                                
                                if (partida -> getPlacarCasa() > partida->getPlacarVisitante()) {
                                    aux1 -> somaVitorias();
                                    aux2 -> somaDerrotas();
                                } else if (partida->getPlacarCasa() < partida->getPlacarVisitante()) {
                                    aux1 -> somaDerrotas();
                                    aux2 -> somaVitorias();
                                } else {
                                    aux1 -> somaEmpates();
                                    aux2 -> somaEmpates();
                                }
                                delete partida;
                                break;
                            }
                        }
                    }while(true);
                }
            }

            //OPÇÃO 5 DO MENU PRINCIPAL
            else if (opcao == "5") {
                system("cls");
                do {
                    string op;
                    cout << endl;
                    cout << "==================================================" << endl; 
                    cout << "|            BEM-VINDO AO MENU JOGADOR           |" << endl;
                    cout << "==================================================" << endl;
                    cout << "|                                                |" << endl;
                    cout << "|      (1) Exibir vitorias, derrotas e empates   |" << endl;
                    cout << "|      (2) Para exibir a escalacao do time       |" << endl;
                    cout << "|      (3) Numero de gols realizados             |" << endl;
                    cout << "|      (4) Voltar ao menu inicial                |" << endl;
                    cout << "|                                                |" << endl;
                    cout << "==================================================" << endl;
                    cout << endl;
                    
                    string nomeJog;
                    cout << "Digite a opcao desejada: ";
                    cin >> op;
                    system("cls");

                    if(op != "1" && op != "2" && op != "3" && op != "4") {
                        cout << "Opcao invalida!" << endl;
                        continue;
                    }

                    else{
                        if (op == "1") {
                            system("cls");
                        // Digite o nome do jogador para exibir vitorias, derrotas e empates
                            cout << "Digite o nome do jogador para exibir vitorias, derrotas e empates" << endl;
                            cin >> nomeJog;
                            system("cls");
                            if(procuraJogador(Campeonato, tamanho, nomeJog) == 1){
                                for (int i = 0; i < tamanho; i++) {
                                    if (Campeonato[i]->getJogador1(nomeJog) == true) {
                                        cout << "Jogador " << nomeJog <<" localizado, veja as estatisticas" << endl;
                                        cout << "O jogador pertence ao time: " << Campeonato[i]->getNome() << endl;
                                        cout << "================================================="<< endl;
                                        cout << "         ESTATISTICAS DO JOGADOR         " << endl;
                                        cout << endl;
                                        cout << "Vitorias: " << Campeonato[i]->getVitorias() << endl;
                                        cout << "Derrotas: " << Campeonato[i]->getDerrotas() << endl;
                                        cout << "Empates: " << Campeonato[i]->getEmpates() << endl;
                                        break;
                                    }
                                    else {
                                        continue;
                                    }
                                }
                            }
                            else if(procuraJogador(Campeonato, tamanho, nomeJog) == 0){
                                cout << "Jogador nao localizado" << endl;
                            }            
                        }

                        else if (op == "2") {
                            system("cls");
                            cout << "Digite o nome do jogador para ver a escalacao de seu time" << endl;
                            cin >> nomeJog;
                            system("cls");
                            if(procuraJogador(Campeonato, tamanho, nomeJog) == 1){
                                for (int i = 0; i < tamanho; i++) {
                                    if (Campeonato[i]->getJogador1(nomeJog) == true){
                                        cout << "Jogador " << nomeJog <<" localizado, veja a escalacao de seu time" << endl;
                                        cout << "O jogador pertence ao time: " << Campeonato[i]->getNome() << endl;
                                        cout << "=====================================================" << endl;
                                        cout << "          ESCALACAO DO TIME             " << endl;
                                        cout << endl;
                                        Campeonato[i]->imprimeJogadores();
                                        break;
                                    }
                                    else{
                                        continue;
                                    }
                                }
                            }

                            else if(procuraJogador(Campeonato, tamanho, nomeJog) == 0){
                                cout << "Jogador nao localizado" << endl;
                            }
                        }
                        
                        else if (op == "3") {
                            system("cls");
                        // exibir numero de gols realizados
                            cout << "Digite o nome do jogador para exibir o numero de gols realizados" << endl;
                            cin >> nomeJog;
                            system("cls");
                            
                            if(procuraJogador(Campeonato, tamanho, nomeJog) == 1){
                                for (int i = 0; i < tamanho; i++) {
                                    if (Campeonato[i]->getJogador1(nomeJog) == true){
                                        cout << "Jogador " << nomeJog <<" localizado, veja o numero de gols realizados" << endl;
                                        cout << "O jogador pertence ao time: " << Campeonato[i]->getNome() << endl;
                                        cout << "================================================" << endl;
                                        cout << "          NUMERO DE GOLS REALIZADOS             " << endl;
                                        cout << endl;
                                        cout << "O jogador " << nomeJog << " realizou " << Campeonato[i]->getJogador(nomeJog)->getGols() << " gols" << endl;
                                        break;
                                    }
                                    else{
                                        continue;
                                    }
                                }
                            }

                            else if(procuraJogador(Campeonato, tamanho, nomeJog) == 0){
                                cout << "Jogador nao localizado" << endl;
                            }
                        }

                        else if (op == "4") {
                            system("cls");
                            break;
                        }
                        else{

                        }
                    }
                } while (true);
            }

            //OPÇÃO 10 DO MENU PRINCIPAL
            else if (opcao == "10") {
                system("cls");
                cout << "===================================" << endl;
                cout << "|           DESENVOLVIDO          |" << endl;
                cout << "|               POR:              |" << endl;
                cout << "===================================" << endl;
                cout << "|         - Jeferson Aires        |" << endl;
                cout << "|         - Dionata Araujo        |" << endl;
                cout << "|         - Kaynan Pereira        |" << endl;
                cout << "===================================" << endl;
                cout << "|       PROFESSOR ORIENTADOR:     |" << endl;
                cout << "|         Thiago Werlley          |" << endl;
                cout << "===================================" << endl;
                cout << "|   Ciencia da Computacao 2022.2  |" << endl;
                cout << "===================================" << endl;
                cout << "|       UFC - CAMPUS QUIXADA      |" << endl;
                cout << "===================================" << endl;
                return 0;
            }
        }
    } while(true);
}