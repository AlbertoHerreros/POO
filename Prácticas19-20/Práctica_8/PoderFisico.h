/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PoderFisico.h
 * Author: Alberto Limas
 *
 * Created on 22 de junio de 2020, 20:08
 */

#ifndef PODERFISICO_H
#define PODERFISICO_H

#include "Poder.h"
#include <iostream>
using std::string;

class PoderFisico: public Poder {
public:
    PoderFisico();
    PoderFisico( string nombre, string descripcion, string afectaA, float capacidadDestructiva );
    PoderFisico(const PoderFisico& orig);
    virtual ~PoderFisico();
    
    Poder& operator=(PoderFisico& otro);
private:

};

#endif /* PODERFISICO_H */

