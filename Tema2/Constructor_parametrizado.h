#ifndef GARITO_H
#define GARITO_H

class Garito {
public:
 
    Garito(string nombre, string direccion);
    
private:
    string _nombre="";
    string _direccion="";
};

#endif /* GARITO_H */

//Garito.cpp

#include "Garito.h"

Garito::Garito(nombre,direccion):
_nombre(nombre),_direccion(direccion){
}
///----------------------------------------------------------------------------------------------------------------------------------------
//SEGUNDO MÉTODO PARA CONSTRUCTOR PARAMETRIZADO
class Garito {
public:
 
    Garito(string nombre, string direccion="Direccion");  ///< Asignar los valores directamente en el constructor, deberán 
                                                          ///< ponerse de derecha a izquierda
private:
    string _nombre="";
    string _direccion="";
};
//---------------------------------------------------------------------------------------------------------------------------------------
//main.cpp
Garito garito("NombreGarito");
Garito garito("NombreGarito","Dirección);
Garito* g= new Garito("NombreGarito"); ///< Creará un garito ("NombreGarito","Direccion");
