
/* 
 * File:   Escuadrón.cpp
 * Author: Alberto Limas
 * 
 * Created on 22 de junio de 2020, 18:26
 */

#include "Escuadron.h"

Escuadron::Escuadron(std::string nombre, int numPilotos, std::string base):
_nombre(nombre),_numPilotos(numPilotos),_base(base){

}

Escuadron::Escuadron(const Escuadron& orig):
_nombre(orig._nombre),_numPilotos(orig._numPilotos),_base(orig._base){
}

Escuadron::~Escuadron() {
     for( int i=0;i<_numPilotos;i++ ){
         
         if( _integrantes[i]!=nullptr ){
             delete _integrantes[i];
             _integrantes[i]=nullptr;
         }
         
        }   
}

void Escuadron::addPiloto(Piloto* piloto) {
    
    _integrantes[_numPilotos]=piloto;
    _numPilotos++;
}

float Escuadron::promedioMisiones() {
    
    float promedio=0;
    
    for( int i=0;i<_numPilotos;i++ ){
        
        promedio+=_integrantes[i]->getNumMisiones();
        
    }
    promedio = promedio/_numPilotos;
    return promedio;
    
}

void Escuadron::setBase(std::string _base) {
    this->_base = _base;
}

std::string Escuadron::getBase() const {
    return _base;
}

void Escuadron::setNumPilotos(int _numPilotos) {
    this->_numPilotos = _numPilotos;
}

int Escuadron::getNumPilotos() const {
    return _numPilotos;
}

void Escuadron::setNombre(std::string _nombre) {
    this->_nombre = _nombre;
}

std::string Escuadron::getNombre() const {
    return _nombre;
}
