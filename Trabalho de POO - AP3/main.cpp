#include <iostream>
#include <fstream>
#include "Date.h"
#include "jogadorGoleiro.h"
#include "jogadorPivo.h"
#include "jogadorFixo.h"
#include "Partidas.h"
#include "Time.h"
/*#include "jogadorReservaGoleiro.h"
#include "jogadorReservaPivo.h"
#include "jogadorReservaFixo.h"*/

using namespace std;

//VETOR TIMESFORA ESTA ACUMULANDO OS TIMES 

//Essa função substitui um time por outro 
void substituirTime(Time *Campeonato[], int qtdTimes, string TimeSusbtituido, string TimeSubstituto, Jogador* jogadores[]) {
    int index;
     
    for (int i = 0; i < qtdTimes; i++) { //Guarda a posição do time que irá ser substituido
        if (Campeonato[i]->getNome() == TimeSusbtituido) {
            index = i;
            break; 
        }
    }
    //Inscreve o time substituto na mesma posição do time que irá ser substituído graças o valor da posição que foi guardada na variável index
    Campeonato[index] = new Time(TimeSubstituto);
    Campeonato[index] -> insJogador(jogadores);
    cout << endl;
    cout << "O " << TimeSubstituto << " esta pronto para jogar!!" << endl;
    cout << "O " << TimeSusbtituido << " foi removido" << endl;
}

//Essa função retorna um inteiro que informa se o jogador existe (1) ou não (0) 
int procuraJogador(Time* Campeonato[], int tamanho,  string nome){
    int cont = 0;

    for(int i = 0; i < tamanho; i++){//Percorre todo o vetor Campeonato do tipo Time(Classe) chamando a função getJogador1 que foi criada na classe Time
        if(Campeonato[i] -> getJogador1(nome) == true){//Verifica nome do jogador está em algum time que foi isncrito no campeonato
            cont++; 
        }
    }
    return cont; //se tiver a função retorna 1 se naão retorna 0
}

//Essa função inscreve um time no campeonato 
void inscreveTime(Time *Campeonato[], int tamanho, string nome, Jogador* jogador[]){ 
    Campeonato[tamanho] = new Time(nome);
    Campeonato[tamanho] -> insJogador(jogador);
    system("cls");
    cout << endl;
    cout << "O Time " << nome << " esta pronto para jogar!!" << endl;
}

//Essa função mostra os times inscritos no campeonato 
void mostraTime(Time* Campeonato[], int tamanho){ 
    for(int i = 0; i < tamanho; i++){
        cout << "- " << Campeonato[i]->getNome() << endl;
    }
    cout << endl;
}

//Essa função coloca os times que não foram inscritos em outro vetor
void inscreveTimeFora(Time *TimesFora[], int tamanho, string nome, Jogador* jogador[]){ 
    TimesFora[tamanho] = new Time(nome);
    TimesFora[tamanho] -> insJogador(jogador);
}

//Essa função mostra os time do vetor TimesFora[]
void mostraTimeFora(Time* TimesFora[], int tamanho1){ 
    for(int i = 0; i < tamanho1; i++){
        cout << "- " << TimesFora[i]->getNome() << endl;
    }
    cout << endl;
}

//Essa função mostra os times para sereme inscritos 
void mostraTimesParaInscricao(Time* TimesFora[], int tamanho1){ 
    for(int i = 0; i < tamanho1; i++){
        cout << "            - "<< TimesFora[i]->getNome() << endl;
    }
}

int main() {

    Jogador *UFC[] = {
                        new JogadorPivo("Jeferson", 18, 10, 15, 10, 12, 13),
                        new JogadorPivo("Richarlison", 30, 100, 462, 10, 30, 30), 
                        new JogadorPivo("Vini", 30, 100, 462, 10, 30, 30), 
                        new JogadorFixo("Deivid", 20, 15, 0, 02, 15, 3), 
                        new JogadorGoleiro("Dionata", 18, 10, 0, 01, 12, 11),
                    };

    Jogador *IFCE[] = {
                        new JogadorPivo("Neymar", 30, 100, 462, 10, 30, 30),
                        new JogadorPivo("Julio", 30, 100, 462, 10, 30, 30), 
                        new JogadorPivo("Matias", 30, 100, 462, 10, 30, 30),
                        new JogadorFixo("Marquinhos", 28, 30, 384, 04, 25, 25),
                        new JogadorGoleiro("Alisson", 30, 10, 1, 01, 20, 20),
                        };

    Jogador *UECE[] = {
                        new JogadorPivo("Alberto", 21, 50, 200, 10, 20, 20), 
                        new JogadorPivo("Riquelme", 30, 100, 462, 10, 30, 30), 
                        new JogadorPivo("Enzo", 30, 100, 462, 10, 30, 30),
                        new JogadorFixo("Gil", 35, 13, 75, 2, 15, 15), 
                        new JogadorGoleiro("Cassio", 35, 10, 10, 1, 15, 15),
                        };

    Jogador *CISNE[] = {
                        new JogadorPivo("Natanael", 21, 50, 200, 10, 20, 20), 
                        new JogadorPivo("Felipe", 30, 100, 462, 10, 30, 30), 
                        new JogadorPivo("Kaua", 30, 100, 462, 10, 30, 30),
                        new JogadorFixo("Eduardo", 35, 13, 75, 2, 15, 15), 
                        new JogadorGoleiro("Thomaz", 35, 10, 10, 1, 15, 15),
                        };

    Jogador *ESTACIO[] = {
                        new JogadorPivo("Pretin", 21, 50, 200, 10, 20, 20), 
                        new JogadorPivo("Negao", 30, 100, 462, 10, 30, 30), 
                        new JogadorPivo("Arthur", 30, 100, 462, 10, 30, 30),
                        new JogadorFixo("Marcelo", 35, 13, 75, 2, 15, 15), 
                        new JogadorGoleiro("Gabriel", 35, 10, 10, 1, 15, 15),
                        };

    Jogador *CATOLICA[] = {
                        new JogadorPivo("Salomao", 21, 50, 200, 10, 20, 20), 
                        new JogadorPivo("Israel", 30, 100, 462, 10, 30, 30), 
                        new JogadorPivo("Ezequiel", 30, 100, 462, 10, 30, 30),
                        new JogadorFixo("Moises", 35, 13, 75, 2, 15, 15), 
                        new JogadorGoleiro("Josue", 35, 10, 10, 1, 15, 15),
                        };

    Time *Campeonato[6];
    int tamanho = 0;

    Time *TimesFora[6];
    int tamanhoFora = 0;

    int dia = 0;
    int mes = 0;   
    int ano = 0;

    

    do{
        //Menu principal 
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
        cout << "|   (6) Exibir o historico de partidas          |" << endl;
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
            //OPÇÃO 1 DO MENU PRINCIPAL
            if (opcao == "1") {
                system("cls");
                int contUFC = 0;
                int contIFCE = 0;
                int contUECE = 0;
                int contCISNE = 0;
                int contESTACIO = 0;
                int contCATOLICA = 0;

                for(int i = 0; i < tamanho; i++){
                    if(Campeonato[i] -> getNome() == "UFC" || Campeonato[i] -> getNome() == "ufc" || Campeonato[i] -> getNome() == "Ufc"){
                        contUFC++;
                    }
                }

                for(int i = 0; i < tamanho; i++){
                    if(Campeonato[i] -> getNome() == "IFCE" || Campeonato[i] -> getNome() == "ifce" || Campeonato[i] -> getNome() == "Ifce"){
                        contIFCE++;
                    }
                }

                for(int i = 0; i < tamanho; i++){
                    if(Campeonato[i] -> getNome() == "UECE" || Campeonato[i] -> getNome() == "uece" || Campeonato[i] -> getNome() == "Uece"){
                        contUECE++;
                    }
                }

                for(int i = 0; i < tamanho; i++){
                    if(Campeonato[i] -> getNome() == "CISNE" || Campeonato[i] -> getNome() == "cisne" || Campeonato[i] -> getNome() == "Cisne"){
                        contCISNE++;
                    }
                }

                for(int i = 0; i < tamanho; i++){
                    if(Campeonato[i] -> getNome() == "ESTACIO" || Campeonato[i] -> getNome() == "estacio" || Campeonato[i] -> getNome() == "Estacio"){
                        contESTACIO++;
                    }
                }

                for(int i = 0; i < tamanho; i++){
                    if(Campeonato[i] -> getNome() == "CATOLICA" || Campeonato[i] -> getNome() == "catolica" || Campeonato[i] -> getNome() == "Catolica"){
                        contCATOLICA++;
                    }
                }

                if(contUFC < 1){
                    inscreveTimeFora(TimesFora, tamanhoFora, "UFC", UFC);
                    tamanhoFora++;
                }

                if(contIFCE < 1){
                    inscreveTimeFora(TimesFora, tamanhoFora, "IFCE", IFCE);
                    tamanhoFora++;
                }

                if(contUECE < 1){
                    inscreveTimeFora(TimesFora, tamanhoFora, "UECE", UECE);
                    tamanhoFora++;
                }

                if(contCISNE < 1){
                    inscreveTimeFora(TimesFora, tamanhoFora, "CISNE", CISNE);
                    tamanhoFora++;
                }

                if(contESTACIO < 1){
                    inscreveTimeFora(TimesFora, tamanhoFora, "ESTACIO", ESTACIO);
                    tamanhoFora++;
                }

                if(contCATOLICA < 1){
                    inscreveTimeFora(TimesFora, tamanhoFora, "CATOLICA", CATOLICA);
                    tamanhoFora++;
                }

                cout << "=================================" << endl;
                cout << "|  BEM-VINDO AO MENU DOS TIMES  | " << endl;
                cout << "=================================" << endl;
                cout << "        TIMES DISPONIVEIS        " << endl;
                mostraTimesParaInscricao(TimesFora, tamanhoFora);
                cout << endl;

                string NomeTime;
                cout << "Qual time deseja inscrever? " << endl;
                cin >> NomeTime;

                if((NomeTime != "UFC" && NomeTime != "ufc" && NomeTime != "Ufc") && 
                (NomeTime != "IFCE" && NomeTime != "ifce" && NomeTime != "Ifce") && 
                (NomeTime != "UECE" && NomeTime != "uece" && NomeTime != "Uece") && 
                (NomeTime != "CISNE" && NomeTime != "cisne" && NomeTime != "Cisne") && 
                (NomeTime != "ESTACIO" && NomeTime != "estacio" && NomeTime != "Estacio") && 
                (NomeTime != "CATOLICA" && NomeTime != "catolica" && NomeTime != "Catolica")) {
                    system("cls");
                    try {
                        cout << "Times invalidos, digite um dos times do menu dos times!!" << endl;
                    }
                    catch (const char *msg) {
                        cerr << msg << endl;
                    }
                    tamanhoFora = 0;
                }

                else {
                    if(NomeTime == "UFC" || NomeTime == "ufc" || NomeTime == "Ufc") { //Chamar uma função para colocar o time dentro do campeonato
                        inscreveTime(Campeonato, tamanho, NomeTime, UFC);
                    }
                    else if(NomeTime == "IFCE" || NomeTime == "ifce" || NomeTime == "Ifce"){ //Chamar uma função para colocar o time dentro do campeonato
                        inscreveTime(Campeonato, tamanho, NomeTime, IFCE);
                    }
                    else if(NomeTime == "UECE" || NomeTime == "uece" || NomeTime == "Uece"){ //Chamar uma função para colocar o time dentro do campeonato
                        inscreveTime(Campeonato, tamanho, NomeTime, UECE);
                    }
                    else if (NomeTime == "CISNE" || NomeTime == "cisne" || NomeTime == "Cisne") {
                        inscreveTime(Campeonato, tamanho, NomeTime, CISNE);
                        //cerr << "INSTITUICAO FALIDA, NAO FOI POSSIVEL CADASTRAR ESSE TIME!" << endl;
                    }
                    else if(NomeTime == "ESTACIO" || NomeTime == "estacio" || NomeTime == "Estacio") {
                        inscreveTime(Campeonato, tamanho, NomeTime, ESTACIO);
                    }
                    else if (NomeTime == "CATOLICA" || NomeTime == "catolica" || NomeTime == "Catolica") {
                        inscreveTime(Campeonato, tamanho, NomeTime, CATOLICA);
                    }
                    //Quantidade de times no campeonato 
                    if(tamanho < 6) {
                        tamanho++;
                    }
                    tamanhoFora = 0;
                }
                
            }

            //OPÇÃO 2 DO MENU PRINCIPAL
            else if(opcao == "2") {
                if (tamanho == 0 || tamanho == 1) {
                    try {
                        system("cls");
                        cout << "Nao ha times inscritos" << endl;
                    }
                    catch (const char *msg) {
                        cerr << msg << endl;
                    }
                }
                else{
                system("cls");
                cout << endl;
                cout << "== TIMES INSCRITOS NO CAMPEONATO ==" << endl;
                        mostraTime(Campeonato, tamanho);
                }
            }

            //OPÇÃO 3 DO MENU PRINCIPAL
            else if(opcao == "3") {
                if (tamanho == 0 || tamanho == 1) {
                    try {
                        system("cls");
                        cout << "Nao ha times suficientes para fazer a substituicao!" << endl;
                    }
                    catch (const char *msg) {
                        cerr << msg << endl;
                    }
                }

                else {
                    string nomeTime;
                    string nomeTimeNovo;
                    int contUFC = 0;
                    int contIFCE = 0;
                    int contUECE = 0;
                    int contCISNE = 0;
                    int contESTACIO = 0;
                    int contCATOLICA = 0;

                    for(int i = 0; i < tamanho; i++){
                        if(Campeonato[i] -> getNome() == "UFC" || Campeonato[i] -> getNome() == "ufc" || Campeonato[i] -> getNome() == "Ufc"){
                            contUFC++;
                        }
                    }

                    for(int i = 0; i < tamanho; i++){
                        if(Campeonato[i] -> getNome() == "IFCE" || Campeonato[i] -> getNome() == "ifce" || Campeonato[i] -> getNome() == "Ifce"){
                            contIFCE++;
                        }
                    }

                    for(int i = 0; i < tamanho; i++){
                        if(Campeonato[i] -> getNome() == "UECE" || Campeonato[i] -> getNome() == "uece" || Campeonato[i] -> getNome() == "Uece"){
                            contUECE++;
                        }
                    }

                    for(int i = 0; i < tamanho; i++){
                        if(Campeonato[i] -> getNome() == "CISNE" || Campeonato[i] -> getNome() == "cisne" || Campeonato[i] -> getNome() == "Cisne"){
                            contCISNE++;
                        }
                    }

                    for(int i = 0; i < tamanho; i++){
                        if(Campeonato[i] -> getNome() == "ESTACIO" || Campeonato[i] -> getNome() == "estacio" || Campeonato[i] -> getNome() == "Estacio"){
                            contESTACIO++;
                        }
                    }

                    for(int i = 0; i < tamanho; i++){
                        if(Campeonato[i] -> getNome() == "CATOLICA" || Campeonato[i] -> getNome() == "catolica" || Campeonato[i] -> getNome() == "Catolica"){
                            contCATOLICA++;
                        }
                    }

                    if(contUFC < 1){
                        inscreveTimeFora(TimesFora, tamanhoFora, "UFC", UFC);
                        tamanhoFora++;
                    }

                    if(contIFCE < 1){
                        inscreveTimeFora(TimesFora, tamanhoFora, "IFCE", IFCE);
                        tamanhoFora++;
                    }

                    if(contUECE < 1){
                        inscreveTimeFora(TimesFora, tamanhoFora, "UECE", UECE);
                        tamanhoFora++;
                    }

                    if(contCISNE < 1){
                        inscreveTimeFora(TimesFora, tamanhoFora, "CISNE", CISNE);
                        tamanhoFora++;
                    }

                    if(contESTACIO < 1){
                        inscreveTimeFora(TimesFora, tamanhoFora, "ESTACIO", ESTACIO);
                        tamanhoFora++;
                    }

                    if(contCATOLICA < 1){
                        inscreveTimeFora(TimesFora, tamanhoFora, "CATOLICA", CATOLICA);
                        tamanhoFora++;
                    }

                    system("cls");
                    
                    cout << "== TIMES INSCRITOS NO CAMPEONATO ==" << endl;
                            mostraTime(Campeonato, tamanho);
                    cout << "===================================";
                    cout << endl;


                    cout << "== TIMES DISPONIVEIS PARA SUBSTITUICAO ==" << endl;
                            mostraTimeFora(TimesFora, tamanhoFora);
                    cout << "===================================";
                    cout << endl;

                    cout << "Qual time voce deseja remover do campeonato" << endl;
                    cin >> nomeTime;

                    cout << "Qual time voce deseja colocar no campeonato" << endl;
                    cin >> nomeTimeNovo;
                    system("cls");

                    if(nomeTimeNovo == "UFC" || nomeTimeNovo == "ufc" || nomeTimeNovo == "Ufc"){ //Chamar uma função para colocar o time dentro do campeonato
                        substituirTime(Campeonato, tamanho, nomeTime, nomeTimeNovo, UFC);
                    }
                    else if(nomeTimeNovo == "IFCE" || nomeTimeNovo == "ifce" || nomeTimeNovo == "Ifce"){ //Chamar uma função para colocar o time dentro do campeonato
                        substituirTime(Campeonato, tamanho, nomeTime, nomeTimeNovo, IFCE);
                    }
                    else if(nomeTimeNovo == "UECE" || nomeTimeNovo == "uece" || nomeTimeNovo == "Uece"){ //Chamar uma função para colocar o time dentro do campeonato
                        substituirTime(Campeonato, tamanho, nomeTime, nomeTimeNovo, UECE);
                    }
                    else if (nomeTimeNovo == "CISNE" || nomeTimeNovo == "cisne" || nomeTimeNovo == "Cisne") {
                        substituirTime(Campeonato, tamanho, nomeTime, nomeTimeNovo, CISNE);
                        //cerr << "INSTITUICAO FALIDA!" << endl;
                    }
                    else if(nomeTimeNovo == "ESTACIO" || nomeTimeNovo == "estacio" || nomeTimeNovo == "Estacio") {
                        substituirTime(Campeonato, tamanho, nomeTime, nomeTimeNovo, ESTACIO);
                    }
                    else if (nomeTimeNovo == "CATOLICA" || nomeTimeNovo == "catolica" || nomeTimeNovo == "Catolica") {
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
                    tamanhoFora = 0;
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
                    ofstream arquivoS;

                    cout << "Digite a data desta partida (no formato dd mm aa): ";
                    cin >> dia >> mes >> ano;
                    Date *data = new Date(dia, mes, ano);
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
                                arquivoS.open("partidas.txt", ios::app);
                                
                                arquivoS << partida -> Data();
                                arquivoS << partida -> getPlacar();
                                arquivoS << "\n";
                                arquivoS << "\n";

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
                                arquivoS.close();
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
                                        if(Campeonato[i]->getJogador(nomeJog)->getGols() == 1){
                                            cout << "O jogador " << nomeJog << " realizou " << Campeonato[i]->getJogador(nomeJog)->getGols() << " gol" << endl;
                                        }
                                        else{
                                            cout << "O jogador " << nomeJog << " realizou " << Campeonato[i]->getJogador(nomeJog)->getGols() << " gols" << endl;
                                        }
                                        
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

            else if(opcao == "6"){
                system("cls");
                if(dia == 0 && mes == 0 && ano == 0){
                    cout << "Nao ha historico de partidas";
                }
                else{
                    cout << "HISTORICO DAS PARTIDAS" << endl;
                    ifstream arquivoE;
                    string linha;
                    arquivoE.open("partidas.txt");
                    if(arquivoE.is_open()){
                        while(getline(arquivoE,linha)){
                            cout << linha << endl;
                        }
                        arquivoE.close();
                    }
                    else{
                        cout << "Nao foi possivel abrir" << endl;
                    }
                }
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