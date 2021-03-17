/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Garito.h
 * Author: Alberto Limas
 *
 * Created on 21 de junio de 2020, 21:34
 */

#ifndef GARITO_H
#define GARITO_H

#include <iostream>
#include <sstream>

#include "ParametroNoValido.h"

using std::string;

class Garito {
public:
    Garito()=default;
    Garito(string nombre, string direccion);
    Garito(const Garito& orig);
    virtual ~Garito();
    
    void SetDireccion(string _direccion);
    string GetDireccion() const;
    void SetNombre(string _nombre);
    string GetNombre() const;
    
    string toCSV();
    
private:
    string _nombre="";
    string _direccion="";
};

#endif /* GARITO_H */

