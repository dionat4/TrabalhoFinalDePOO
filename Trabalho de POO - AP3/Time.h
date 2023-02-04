#ifndef TIME_H
#define TIME_H
#include <iostream>
#include "Jogador.h"

class Time: public Jogador {
private:
    std::string Nome;
    Jogador* Jogadores[5];
    int Vitorias = 0;
    int Derrotas = 0;
    int Empates = 0; 
public:
    Time(std::string Nome);
    Time() = default;

    int getVitorias();
    int getDerrotas();
    int getEmpates();
    
    std::string getNome();
    std::string getResultados();
    
    void imprimeNome();
    void imprimeJogadores();

    void somaVitorias();
    void somaDerrotas();
    void somaEmpates();

    void insJogador(Jogador *[5]);

    Jogador* getJogador(string nome);
    bool getJogador1(string nome);

};

#endif