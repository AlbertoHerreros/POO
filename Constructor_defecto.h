#ifndef GARITO_H
#define GARITO_H

class Garito {
public:
    Garito();

private:
    std::string _nombre;
    std::string _direccion;
};

#endif /* GARITO_H */

//Garito.cpp
#include "Garito.h"

Garito::Garito(){
    _nombre="";
    _direccion="";
}
//----------------------------------------------------------------------------------------------------------------------------------------
///< SEGUNDO MÉTODO PARA EL CONSTRUCTOR POR DEFECTO

class Garito {
public:
    Garito()=default;               ///< Asignamos default -> Cogerá el valor de las variables inicializadas en su declaración

private:
    std::string _nombre="";         ///< Las variables vienen inicializadas
    std::string _direccion="";
};

//Garito.cpp

//Se suprime el constructor en .cpp


