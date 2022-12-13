#include <iostream>
#include <string>
#include <sstream>
#include "Partidas.h"
using namespace std;
/**
 * recebe uma data e dois times, da casa e visitante 
*/

Partidas::Partidas(Time* timeCasa, Time* timeVisitante, int Dia, int Mes, int Ano): Date(Dia, Mes, Ano) {
    this->timeCasa = timeCasa;
    this->timeVisitante = timeVisitante;
}
/**
 * os metodos getCasa e getVisitante adicionam gols aos atributos 
 * placarCasa e placarVisitante
 * 
*/
int Partidas::getPlacarCasa() {
    return placarCasa;
}
int Partidas::getPlacarVisitante() {
    return placarVisitante;
}   
string Partidas::getCasa() {
    return timeCasa->getNome();
}

string Partidas::getVisitante() {
    return timeVisitante->getNome();
}
void Partidas::golCasa() {
    placarCasa++;
}
void Partidas::golVisitante() {
    placarVisitante++;
}
/**
 * retorna uma string com o  resultado do jogo no seguinte formato
*/

string Partidas::getPlacar() {
    stringstream result;
    result << timeCasa->getNome() << " " << placarCasa << " X " << placarVisitante << " " << timeVisitante->getNome();
    return result.str();
}
