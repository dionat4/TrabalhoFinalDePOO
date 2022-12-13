#ifndef JOGADORPIVO_h
#define JOGADORPIVO_h
#include "Jogador.h"

class JogadorPivo: public Jogador {
private:
    int Velocidade;
    int Tecnica;
public:
    JogadorPivo(std::string nomeJogador, int Idade, int Habilidade, int Gols, int Camisa, int Velocidade, int Tecnica);
    int getHabilidade();

};

#endif // JOGADORATACANTE