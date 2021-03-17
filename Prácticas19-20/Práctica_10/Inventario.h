/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Inventario.h
 * Author: Alberto Limas
 *
 * Created on 24 de junio de 2020, 16:05
 */

#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "ContenedorItems.h"
#include "Item.h"
#include "Cofre.h"

class Inventario: public ContenedorItems {
public:
    Inventario();
    Inventario(const Inventario& orig);
    virtual ~Inventario();
    
    virtual void mete(Item* item) override;
  
private:

};

#endif /* INVENTARIO_H */

