
/* 
 * File:   ItemApilable.cpp
 * Author: Alberto Limas
 * 
 * Created on 24 de junio de 2020, 12:58
 */

#include "ItemApilable.h"

ItemApilable::ItemApilable(int numElementos):
_numElementos(numElementos){ 
    if( numElementos > 64){
        throw std::out_of_range ("Sobrepasado límite items");
    }
}

ItemApilable::ItemApilable(const ItemApilable& orig):
_numElementos(orig._numElementos){
}

ItemApilable::~ItemApilable() {
}

void ItemApilable::decrementaNumElementos(int cantidad) {
    
    if( _numElementos-cantidad > 0){
        _numElementos-=cantidad;
    }
    else{
        throw std::out_of_range ("Sobrepasado límite inferior items");
    }
    
}

int ItemApilable::getNumElementos() {
    return _numElementos;
}

void ItemApilable::incrementaNumElementos(int cantidad) {
    
    if( _numElementos+cantidad < 64 ){
        _numElementos+=cantidad;
    }
    else{
     throw std::out_of_range ("Sobrepasado límite items");   
    }
    
}
