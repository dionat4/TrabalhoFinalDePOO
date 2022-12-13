#ifndef PARTIDAS_H
#define PARTIDAS_H
#include <iostream>
#include "Date.h"
#include "Time.h"

class Partidas: public Time, Date {
private:
    Time* timeCasa;
    Time* timeVisitante;
    int placarCasa = 0; // no doc temm como int, mas eu acho que tem que ser string
    int placarVisitante = 0; // mesmo comentário da linha de cima

public:
    // construtor da classe
    Partidas(Time* timeCasa, Time* timeVisitante, int Dia, int Mes, int Ano);
    
    int getPlacarCasa();
    int getPlacarVisitante();

    void golCasa();
    void golVisitante();
    
    std::string getCasa();
    std::string getVisitante();
    std::string getPlacar();
    std::string Data();

};

#endif