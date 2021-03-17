
/* 
 * File:   Filete.cpp
 * Author: Alberto Limas
 * 
 * Created on 24 de junio de 2020, 12:08
 */

#include "Filete.h"

Filete::Filete( std::string descripcion ):
_descripcion(descripcion){
}
Filete::Filete(const Filete& orig):
_descripcion(orig._descripcion){
}

Filete::~Filete() {
}

std::string Filete::getDescripcion() {
    return "Un filete";
}
