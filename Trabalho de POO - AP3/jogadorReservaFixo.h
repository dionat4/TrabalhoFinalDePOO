#ifndef JogadorReservaFixo_H
#define JogadorReservaFixo_H
#include "Jogador.h"

class JogadorReservaFixo: public Jogador {
private:
    int Cobertura;
    int Desarme;
    
public: 
    JogadorReservaFixo(std::string nomeJogador, int Idade, int Habilidade, int Gols, int Camisa, int Cobertura, int Desarme);
    int getHabilidade();
};

#endif