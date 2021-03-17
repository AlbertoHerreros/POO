
/* 
 * File:   Garito.cpp
 * Author: Alberto Limas
 * 
 * Created on 21 de junio de 2020, 21:34
 */

#include "Garito.h"

Garito::Garito(string nombre, string direccion):
_nombre(nombre),_direccion(direccion){

}


Garito::Garito(const Garito& orig):
_nombre(orig._nombre),_direccion(orig._direccion){
}

Garito::~Garito() {
}

void Garito::SetDireccion(string _direccion) {
    if(_direccion==""){
        throw ParametroNoValido("Garito.cpp","Garito::SetDireccion","No puede ser espacio en blanco");
    }
    else{
        this->_direccion = _direccion;
    }
}

string Garito::GetDireccion() const {
    return _direccion;
}

void Garito::SetNombre(string _nombre) {
     if(_nombre==""){
       throw ParametroNoValido("Garito.cpp","Garito::SetNombre","No puede ser espacio en blanco");
    }
    else{
        this->_nombre = _nombre;
    }
}

string Garito::GetNombre() const {
    return _nombre;
}

string Garito::toCSV() {
    std::stringstream ss;
    ss << _nombre << ";" << _direccion ;
    return ss.str();
}

