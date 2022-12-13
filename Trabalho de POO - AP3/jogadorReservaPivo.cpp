#include <iostream>
#include "jogadorReservaPivo.h"

JogadorReservaPivo::JogadorReservaPivo(std::string nomeJogador, int Idade, int Habilidade, int Gols, int Camisa, int Velocidade, int Tecnica): Jogador(nomeJogador, Idade, Habilidade, Gols, Camisa) {
    this->Velocidade = Velocidade;
    this-> Tecnica = Tecnica;
}

int JogadorReservaPivo::getHabilidade() {
    return ((Habilidade *5 ) + (Velocidade * 2) + (Tecnica * 3)) / 10;
}