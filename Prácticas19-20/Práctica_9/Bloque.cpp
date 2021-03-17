
/* 
 * File:   Bloque.cpp
 * Author: Alberto Limas
 * 
 * Created on 24 de junio de 2020, 12:08
 */

#include "Bloque.h"

Bloque::Bloque(std::string descripcion):
_descripcion(descripcion){
    
}

Bloque::Bloque(const Bloque& orig):
_descripcion(orig._descripcion){
}

Bloque::~Bloque() {
}

std::string Bloque::getDescripcion() {
    std::stringstream ss;
    ss << _descripcion << " (" << this->getNumElementos() << ")" ;
    return ss.str();
}


