/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bloque.h
 * Author: Alberto Limas
 *
 * Created on 24 de junio de 2020, 12:08
 */

#ifndef BLOQUE_H
#define BLOQUE_H

#include "ItemApilable.h"
#include <sstream>

class Bloque: public ItemApilable {
public:
    Bloque()=default;
    Bloque( std::string descripcion );
    Bloque(const Bloque& orig);
    virtual ~Bloque();
    
    std::string getDescripcion();
 
private:
    std::string _descripcion="";
};

#endif /* BLOQUE_H */

