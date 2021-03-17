/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Escuadrón.h
 * Author: Alberto Limas
 *
 * Created on 22 de junio de 2020, 18:26
 */

#ifndef ESCUADRON_H
#define ESCUADRON_H

#include "Piloto.h"
#include <iostream>

class Escuadron {
public:
    
    
    Escuadron()=default;
    Escuadron( std::string nombre, int numPilotos, std::string base );
    Escuadron(const Escuadron& orig);
    virtual ~Escuadron();
    
    void addPiloto(Piloto* piloto);
    float promedioMisiones();
    
    void setBase(std::string _base);
    std::string getBase() const;
    void setNumPilotos(int _numPilotos);
    int getNumPilotos() const;
    void setNombre(std::string _nombre);
    std::string getNombre() const;
    
private:
    std::string _nombre="";
    int _numPilotos=0;
    std::string _base="";
    
    Piloto* _integrantes[50];
};

#endif /* ESCUADRON_H */

