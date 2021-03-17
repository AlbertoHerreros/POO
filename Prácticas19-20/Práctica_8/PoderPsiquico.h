/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PoderPsiquico.h
 * Author: Alberto Limas
 *
 * Created on 22 de junio de 2020, 20:08
 */

#ifndef PODERPSIQUICO_H
#define PODERPSIQUICO_H

#include "Poder.h"
#include <iostream>
#include <cmath>

using std::string;

class PoderPsiquico: public Poder{
public:
    PoderPsiquico();
    PoderPsiquico( string nombre, string descripcion, string afectaA, float capacidadDestructiva, float lucidez );
    PoderPsiquico(const PoderPsiquico& orig);
    virtual ~PoderPsiquico();
    
    Poder& operator =( PoderPsiquico& otro );
    
    void SetLucidez(float _lucidez);
    float GetLucidez() const;
    
    virtual float getCapacidadDestructiva() override;
    
    virtual std::string toCSV() override;

private:
    float _lucidez = 0;
};

#endif /* PODERPSIQUICO_H */

