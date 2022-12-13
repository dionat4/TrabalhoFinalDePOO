#ifndef JOGADORFIXO_H
#define JOGADORFIXO_H
#include "Jogador.h"

class JogadorFixo: public Jogador {
private:
    int Cobertura;
    int Desarme;
public: 
    JogadorFixo(std::string nomeJogador, int Idade, int Habilidade, int Gols, int Camisa, int Cobertura, int Desarme);
    int getHabilidade();
};

#endif