#include <iostream>
#include <string>
#include "jogadorReservaGoleiro.h"
using namespace std;

JogadorReservaGoleiro::JogadorReservaGoleiro(string nomeJogador, int Idade, int Habilidade, int Gols, int Camisa, int Reflexos, float Altura): Jogador(nomeJogador, Idade, Habilidade, Gols, Camisa) {
    this->Reflexos  = Reflexos;
    this->Altura = Altura;
}

int JogadorReservaGoleiro::getHabilidade() {
    return ((Habilidade * 5) + (((int)(Altura * 100)) * 2) + (Reflexos * 3)) / 10;
}