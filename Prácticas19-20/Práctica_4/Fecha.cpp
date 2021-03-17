
/* 
 * File:   Fecha.cpp
 * Author: Alberto Limas
 * 
 * Created on 21 de junio de 2020, 21:39
 */

#include "Fecha.h"

Fecha::Fecha(int dia, int mes, int year):
_dia(dia),_mes(mes),_year(year){

}


Fecha::Fecha(const Fecha& orig):
_dia(orig._dia),_mes(orig._mes),_year(orig._year){
}

Fecha::~Fecha() {
}

void Fecha::SetYear(int _year) {
    this->_year = _year;
}

int Fecha::GetYear() const {
    return _year;
}

void Fecha::SetMes(int _mes) {
    this->_mes = _mes;
}

int Fecha::GetMes() const {
    return _mes;
}

void Fecha::SetDia(int _dia) {
    this->_dia = _dia;
}

int Fecha::GetDia() const {
    return _dia;
}

///--------------------------------

bool Fecha::operator<(const Fecha& otro) {
    double fecha1 = this->_dia + this->_mes*100 + this->_year*10000;
    double fecha2 = otro._dia + otro._mes*100 + otro._year*10000;
    return fecha1<fecha2;
}

bool Fecha::operator==(const Fecha& otro) {
    double fecha1 = this->_dia + this->_mes*100 + this->_year*10000;
    double fecha2 = otro._dia + otro._mes*100 + otro._year*10000;
    return fecha1==fecha2;
}
//---

bool Fecha::operator!=(const Fecha& otro) {
    return !(this->operator == (otro)) ;
}

bool Fecha::operator<=(const Fecha& otro) {
    return( this->operator < (otro) || this->operator == (otro) );
}

bool Fecha::operator>(const Fecha& otro) {
    return( (!(this->operator < (otro))) && (!(this->operator == (otro))));
}

bool Fecha::operator>=(const Fecha& otro) {
    return( !(this->operator < (otro)) );
}

std::string Fecha::toCSV() {
    std::stringstream ss;
    ss << _dia << ";" << _mes << "," << _year ;
    return ss.str();
}





