
/* 
 * File:   PoderFisico.cpp
 * Author: Alberto Limas
 * 
 * Created on 22 de junio de 2020, 20:08
 */

#include "PoderFisico.h"

PoderFisico::PoderFisico() {
    Poder();
}

PoderFisico::PoderFisico(string nombre, string descripcion, string afectaA, float capacidadDestructiva):
Poder( nombre, descripcion, afectaA, capacidadDestructiva ){

}


PoderFisico::PoderFisico(const PoderFisico& orig):
Poder(orig){
}

PoderFisico::~PoderFisico() {
}

Poder& PoderFisico::operator=(PoderFisico& otro) {
    
    if( this!= &otro ){
        
        this->Poder::operator =( otro );
        
    }
    return (*this);
    
}
