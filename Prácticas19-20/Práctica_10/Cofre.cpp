
/* 
 * File:   Cofre.cpp
 * Author: Alberto Limas
 * 
 * Created on 24 de junio de 2020, 15:56
 */

#include "Cofre.h"


Cofre::Cofre() {
}

Cofre::Cofre(const Cofre& orig) {
}

Cofre::~Cofre() {
}

std::string Cofre::getDescripcion() {
    
    std::stringstream ss;
    
    for( int i=0;i<_numItems;i++ ){
        
        ss << _items[i] << ";" << _items[i]->getDescripcion() << std::endl;
        
    }
    
    return ss.str();
}
