
/* 
 * File:   PoderPsiquico.cpp
 * Author: Alberto Limas
 * 
 * Created on 22 de junio de 2020, 20:08
 */

#include "PoderPsiquico.h"

PoderPsiquico::PoderPsiquico() {
    Poder();
}

PoderPsiquico::PoderPsiquico(string nombre, string descripcion, string afectaA, float capacidadDestructiva, float lucidez ):
Poder( nombre, descripcion, afectaA, capacidadDestructiva ),_lucidez(lucidez){

}

PoderPsiquico::PoderPsiquico(const PoderPsiquico& orig):
Poder(orig),_lucidez(orig._lucidez){
}

PoderPsiquico::~PoderPsiquico() {
}

Poder& PoderPsiquico::operator=(PoderPsiquico& otro) {
    
    if( this != &otro){
        
        this->Poder::operator =( otro );
        this->_lucidez = otro._lucidez;
        
    }
    return( *this );
}

void PoderPsiquico::SetLucidez(float _lucidez) {
    this->_lucidez = _lucidez;
}

float PoderPsiquico::GetLucidez() const {
    return _lucidez;
}

 std::string PoderPsiquico::toCSV() {
         std::stringstream ss;
         ss << _nombre << ";" << _descripcion << ";" << _afectaA << ";" << _capacidadDestructiva << ";" << _lucidez;
         return ss.str();
}

float PoderPsiquico::getCapacidadDestructiva() {
    return _capacidadDestructiva*_lucidez;
}
