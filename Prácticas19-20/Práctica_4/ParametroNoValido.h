/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ParametroNoValido.h
 * Author: Alberto Limas
 *
 * Created on 21 de junio de 2020, 23:55
 */

#ifndef PARAMETRONOVALIDO_H
#define PARAMETRONOVALIDO_H

#include <iostream>
#include <sstream>

using std::string;

class ParametroNoValido {
public:
    ParametroNoValido()=default;
    ParametroNoValido(string fichero, string funcion, string descripcion);
    ParametroNoValido(const ParametroNoValido& orig);
    virtual ~ParametroNoValido();
    
    string queOcurre();
private:
    string _fichero="";
    string _funcion="";
    string _descripcion="";
};

#endif /* PARAMETRONOVALIDO_H */

