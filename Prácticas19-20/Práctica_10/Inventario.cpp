
/* 
 * File:   Inventario.cpp
 * Author: Alberto Limas
 * 
 * Created on 24 de junio de 2020, 16:05
 */

#include "Inventario.h"

Inventario::Inventario() {
}

Inventario::Inventario(const Inventario& orig) {
}

Inventario::~Inventario() {
}

void Inventario::mete(Item* item) {

    if( item == nullptr){
    throw std::invalid_argument ("Puntero nullptr");
    }
    
    if (_numItems==_maxItems)
        throw std::out_of_range("[Cofre::mete] No caben más elementos en el cofre");
    _items[_numItems++]=item;
}
