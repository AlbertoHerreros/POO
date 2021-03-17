
/* 
 * File:   Espada.cpp
 * Author: Alberto Limas
 * 
 * Created on 24 de junio de 2020, 12:08
 */

#include "Espada.h"

Espada::Espada( std::string descripcion ):
_descripcion(descripcion){
}

Espada::Espada(const Espada& orig):
_descripcion(orig._descripcion){
}

Espada::~Espada() {
}

std::string Espada::getDescripcion() {
    return "Una espada";
}
