#ifndef TIME_H
#define TIME_H
#include <iostream>
#include "Jogador.h"
#include "Date.h"
#include <vector>
class Time: public Jogador { // rever essas parte da heranças, dúvidas no UML
private:
    std::string Nome;
    Jogador* Jogadores[8];
    /**
     * os metodos são incializados com zero e aumentam conforme o resultado
    */
    int Vitorias = 0;
    int Derrotas = 0;
    int Empates = 0; 
    vector <int> dia;
    vector <int> mes;
    vector <int> ano;
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

    void insJogador(Jogador *[8]);

    Jogador* getJogador(string nome);
    bool getJogador1(string nome);

};

#endif