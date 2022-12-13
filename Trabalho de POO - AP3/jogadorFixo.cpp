#include <iostream>
#include "jogadorFixo.h"

JogadorFixo::JogadorFixo(string nomeJogador, int Idade, int Habilidade, int Gols, int Camisa, int Cobertura, int Desarme): Jogador(nomeJogador, Idade, Habilidade, Gols, Camisa) {
    this->Cobertura = Cobertura;
    this->Desarme = Desarme;
}

int JogadorFixo::getHabilidade() {
    return ((Habilidade*5) + (Cobertura*3) + (Desarme*2)) / 10;
}