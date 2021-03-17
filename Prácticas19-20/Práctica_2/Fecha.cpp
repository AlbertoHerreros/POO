
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

