/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cofre.h
 * Author: Alberto Limas
 *
 * Created on 24 de junio de 2020, 15:56
 */

#ifndef COFRE_H
#define COFRE_H

#include "ContenedorItems.h"
#include "Item.h"
#include <sstream>

class Cofre: public Item, public ContenedorItems{
public:
    Cofre();
    Cofre(const Cofre& orig);
    virtual ~Cofre();
    
    //void mete(Item* item) override;
    virtual  std::string getDescripcion() override;

private:

};

#endif /* COFRE_H */

