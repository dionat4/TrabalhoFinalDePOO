#include <iostream>
#include <string>
#include <sstream>
#include "Date.h"
using namespace std;

Date::Date(int Dia, int Mes, int Ano) {
    this->Dia = Dia;
    this->Mes = Mes;
    this->Ano = Ano;
}
string Date::toStringPrint() {
    stringstream ss;
    ss << Dia << " de " << Mes << " de " << Ano << endl;
    return ss.str();
}