#ifndef JOGADORGOLEIRO_H
#define JOGADORGOLEIRO_H
#include <iostream>
#include "Jogador.h"

class JogadorGoleiro : public Jogador {
private:
    int Reflexos;
    float Altura;
public:
    JogadorGoleiro(string nomeJogador, int Idade, int Habilidade, int Gols, int Camisa, int Reflexos, float Altura);
    int getHabilidade();
};

#endif