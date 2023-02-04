#include <iostream>
#include <string>
#include "Jogador.h"
using namespace std;

Jogador::Jogador(string nomeJogador, int Idade, int Habilidade, int Gols, int Camisa) {
    this->nomeJogador = nomeJogador;
    this->Idade = Idade;
    this->Habilidade = Habilidade;
    this->Gols = 0;
    this->Camisa = Camisa;
}

string Jogador::getnomeJogador() {
    return nomeJogador;
}
int Jogador::getHabilidade() {
    return Habilidade;
}
int Jogador::getGols() {
    return Gols;
}
int Jogador::getIdade() {
    return Idade;
}
int Jogador::getCamisa() {
    return Camisa;
}
void Jogador::setnomeJogador(string nomeJogador) {
    this->nomeJogador = nomeJogador;
}
// revisar essa função não entendi muito bem essa "somaGols"
/**
 * deverá somar um gol ao registro de gols do jogador, começando em zero e atualizando a cada gol na partida
*/
void Jogador::somaGols() {
    Gols++;
}
void Jogador::printJogador() {
    cout << "Nome: " << getnomeJogador() << endl;
    cout << "Idade: " << getIdade() << endl;
    cout << "Habilidade: " << getHabilidade() << endl;
    cout << "Gols: " << getGols() << endl;
    cout << "Camisa: " << getCamisa() << endl;
}

void Jogador::NomeJogadorTime() {
    cout << "Nome: " << getnomeJogador() << endl;
}