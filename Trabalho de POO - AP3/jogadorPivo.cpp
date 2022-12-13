#include <iostream>
#include "jogadorPivo.h"

JogadorPivo::JogadorPivo(std::string nomeJogador, int Idade, int Habilidade, int Gols, int Camisa, int Velocidade, int Tecnica): Jogador(nomeJogador, Idade, Habilidade, Gols, Camisa) {
    this->Velocidade = Velocidade;
    this-> Tecnica = Tecnica;
}

int JogadorPivo::getHabilidade() {
    return ((Habilidade *5 ) + (Velocidade * 2) + (Tecnica * 3)) / 10;
}