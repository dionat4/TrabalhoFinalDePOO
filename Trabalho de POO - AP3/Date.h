#ifndef DATE_H
#define DATE_H
#include <iostream>

class Date {
private:
    int Dia;
    int Mes;
    int Ano;
public:
    Date(int Dia, int Mes, int Ano);
    std::string toStringPrint();
};   
#endif