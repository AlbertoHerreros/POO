
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

PoderPsiquico::PoderPsiquico(string nombre, string descripcion, string afectaA, float capacidadDestructiva):
Poder( nombre, descripcion, afectaA, capacidadDestructiva ){

}


PoderPsiquico::PoderPsiquico(const PoderPsiquico& orig):
Poder(orig){
}

PoderPsiquico::~PoderPsiquico() {
}

Poder& PoderPsiquico::operator=(PoderPsiquico& otro) {
    
    if( this != &otro){
        
        this->Poder::operator =( otro );
        
    }
    return( *this );
}

void PoderPsiquico::SetLucidez(float _lucidez) {
    this->_lucidez = _lucidez;
}

float PoderPsiquico::GetLucidez() const {
    return _lucidez;
}

