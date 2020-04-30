/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Garito.h
 * Author: Alberto Limas
 *
 * Created on 19 de abril de 2020, 20:31
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
    
    //Getters y Setters
    
    void SetDireccion(string _direccion);
    string GetDireccion() const;
    void SetNombre(string _nombre);
    string GetNombre() const;
    
    std::string toCSV(Garito& garito);
private:
    string _nombre="";
    string _direccion="";
};

#endif /* GARITO_H */

