/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Espada.h
 * Author: Alberto Limas
 *
 * Created on 24 de junio de 2020, 12:08
 */

#ifndef ESPADA_H
#define ESPADA_H

#include "Item.h"


class Espada: public Item {
public:
    Espada()=default;
    Espada( std::string descripcion );
    Espada(const Espada& orig);
    virtual ~Espada();
    
    std::string getDescripcion() override;

private:
    std::string _descripcion="";
};

#endif /* ESPADA_H */

