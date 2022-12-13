#ifndef JOGADORRESERVAGOLEIRO_H
#define JOGADORRESERVAGOLEIRO_H
#include <iostream>
#include "Jogador.h"

class JogadorReservaGoleiro : public Jogador {
private:
    int Reflexos;
    float Altura;
public:
    JogadorReservaGoleiro(string nomeJogador, int Idade, int Habilidade, int Gols, int Camisa, int Reflexos, float Altura);
    int getHabilidade();
};

#endif