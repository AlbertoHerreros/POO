/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ItemApilable.h
 * Author: Alberto Limas
 *
 * Created on 24 de junio de 2020, 12:58
 */

#ifndef ITEMAPILABLE_H
#define ITEMAPILABLE_H

#include "Item.h"
#include <stdexcept>

class ItemApilable: public Item {
public:
    ItemApilable()=default;
    ItemApilable( int numElementos );
    ItemApilable(const ItemApilable& orig);
    virtual ~ItemApilable();
    
    void incrementaNumElementos( int cantidad );
    void decrementaNumElementos( int cantidad );
    int getNumElementos();
    
    virtual std::string getDescripcion() =0;

private:
    int _numElementos=1;

};

#endif /* ITEMAPILABLE_H */

