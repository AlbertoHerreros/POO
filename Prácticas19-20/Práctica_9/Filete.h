/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Filete.h
 * Author: Alberto Limas
 *
 * Created on 24 de junio de 2020, 12:08
 */

#ifndef FILETE_H
#define FILETE_H

#include "Item.h"


class Filete: public Item {
public:
    Filete()=default;
    Filete( std::string descripcion );
    Filete(const Filete& orig);
    virtual ~Filete();
    
    std::string getDescripcion() override;

private:
    std::string _descripcion="";
};

#endif /* FILETE_H */

