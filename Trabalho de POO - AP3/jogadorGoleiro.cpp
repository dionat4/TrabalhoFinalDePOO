#include <iostream>
#include <string>
#include "jogadorGoleiro.h"
using namespace std;

JogadorGoleiro::JogadorGoleiro(string nomeJogador, int Idade, int Habilidade, int Gols, int Camisa, int Reflexos, float Altura): Jogador(nomeJogador, Idade, Habilidade, Gols, Camisa) {
    this->Reflexos  = Reflexos;
    this->Altura = Altura;
}

int JogadorGoleiro::getHabilidade() {
    return ((Habilidade * 5) + (((int)(Altura * 100)) * 2) + (Reflexos * 3)) / 10;
}