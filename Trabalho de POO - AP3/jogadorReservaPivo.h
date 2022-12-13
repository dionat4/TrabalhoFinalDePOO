#ifndef JOGADORRESERVAPIVO_h
#define JOGADORRESERVAPIVO_h
#include "Jogador.h"

class JogadorReservaPivo: public Jogador {
private:
    int Velocidade;
    int Tecnica;
public:
    JogadorReservaPivo(std::string nomeJogador, int Idade, int Habilidade, int Gols, int Camisa, int Velocidade, int Tecnica);
    int getHabilidade();

};

#endif