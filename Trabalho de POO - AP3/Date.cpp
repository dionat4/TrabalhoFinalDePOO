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
    ss << getDia() << " do " << getMes() << " de " << getAno() << endl;
    return ss.str();
}

int Date::getDia(){
    return Dia;
}

int Date::getMes(){
    return Mes;
}

int Date::getAno(){
    return Ano;
}