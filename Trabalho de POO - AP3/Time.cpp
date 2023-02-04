#include <iostream>
#include <string>
#include <sstream>
#include "Time.h"
using namespace std;

/**
 * construtor recebe apenas o nome do time, os jogadores vão sendo inseridos 
 * posteriormente.
*/
Time::Time(string Nome) {
    this->Nome = Nome;
}

string Time::getNome() {
    return Nome;  
}

//GETS
int Time::getVitorias() {
    return Vitorias;
}
int Time::getDerrotas() {
    return Derrotas;
}   
int Time::getEmpates() {
    return Empates;
}

/*
 * retorna uma string organizada 
*/
string Time::getResultados() {
    stringstream result;
    result << "Vitorias: " << Vitorias << "," << "Empates: " << Empates << "," 
    << "Derrotas: " << Derrotas << endl;
    return result.str();
}

void Time::imprimeNome() {
    cout << "JOGADORES DO TIME" << endl;
    for (int i = 0; i < 5; i++) {
        Jogadores[i]->Jogador::NomeJogadorTime();
    }
}

void Time::imprimeJogadores() {
    cout << "Jogadores Pivos:" << endl;
    for (int i = 0; i < 3; i++) {
        Jogadores[i]->Jogador::printJogador();
        cout << endl;
    }
    cout << "==================================" << endl;
    cout << "Jogadores Fixos:" << endl;
    for (int i = 3; i <4; i++) {
        Jogadores[i]->Jogador::printJogador();
        cout << endl;
    }
    cout << "==================================" << endl;
    cout << "Goleiro do Time: " << endl;
    for (int i = 4; i < 5; i++) {
        Jogadores[i]->Jogador::printJogador();
        cout << endl;
    }
}
void Time::insJogador(Jogador *Time[5]) {
    for (int i = 0; i < 5; i++) {
        Jogadores[i] = Time[i];
    }
}

Jogador* Time::getJogador(string nome){
    for(int i = 0; i < 5; i++){
        if(Jogadores[i] -> getnomeJogador() == nome){
            return Jogadores[i];
        }
    }
    return nullptr;
}

bool Time::getJogador1(string nome){
    for(int i = 0; i < 5; i++){
        if(Jogadores[i] -> getnomeJogador() == nome){
            return true;
        }
    }
    return false;
}

void Time::somaVitorias() {
    Vitorias++;
}
void Time::somaDerrotas() {
    Derrotas++;
}
void Time::somaEmpates() {
    Empates++;
} 

