#ifndef JOGADOR_H
#define JOGADOR_H
#include <iostream>

using namespace std;

class Jogador {
protected:
    int Habilidade;
private:
    std::string nomeJogador;
    int Idade;
    int Gols;
    int Camisa;
public:
    Jogador() = default;
    Jogador(std::string nomeJogador, int Idade, int Habilidade, int Gols, int Camisa);

    std::string getnomeJogador();
    void setnomeJogador(std::string nomeJogador);
    virtual int getHabilidade(); // método virtual
    int getGols();
    int getIdade();
    int getCamisa();
    void somaGols();
    void printJogador();
    void NomeJogadorTime();
};

#endif