
/* 
 * File:   Poder.cpp
 * Author: Alberto Limas
 * 
 * Created on 22 de junio de 2020, 19:37
 */

#include "Poder.h"

Poder::Poder(std::string nombre, std::string descripcion, std::string afectaA, float capacidadDestructiva):
_nombre(nombre),_descripcion(descripcion),_afectaA(afectaA),_capacidadDestructiva(capacidadDestructiva){

}

Poder::Poder(const Poder& orig):
_nombre(orig._nombre),_descripcion(orig._descripcion),_afectaA(orig._afectaA),_capacidadDestructiva(orig._capacidadDestructiva){
}

Poder::~Poder() {
}

void Poder::operator=(const Poder& otro) {
    if(this != &otro){
        _nombre=otro._nombre;
        _descripcion=otro._descripcion;
        _afectaA=otro._afectaA;
        _capacidadDestructiva=otro._capacidadDestructiva;
    }
}

std::string Poder::toCSV() {
    std::stringstream ss;
    ss << _nombre << ";" << _descripcion << ";" << _afectaA << ";" << _capacidadDestructiva;
    return ss.str();
}

void Poder::setCapacidadDestructiva(float _capacidadDestructiva) {
    this->_capacidadDestructiva = _capacidadDestructiva;
}

float Poder::getCapacidadDestructiva() const {
    return _capacidadDestructiva;
}

void Poder::setAfectaA(std::string _afectaA) {
    this->_afectaA = _afectaA;
}

std::string Poder::getAfectaA() const {
    return _afectaA;
}

void Poder::setDescripcion(std::string _descripcion) {
    this->_descripcion = _descripcion;
}

std::string Poder::getDescripcion() const {
    return _descripcion;
}

void Poder::setNombre(std::string _nombre) {
    this->_nombre = _nombre;
}

std::string Poder::getNombre() const {
    return _nombre;
}
