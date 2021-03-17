#ifndef CLASE_H
#define CLASE_H

class Clase {
public:
    Clase();

private:
    std::string _nombre;
    int _num;
};

#endif /* CLASE_H */

//Clase.cpp
#include "Clase.h"

Clase::Clase(){
    _nombre = "";
    _num = 0;
}
//----------------------------------------------------------------------------------------------------------------------------------------
//SEGUNDO MÉTODO PARA EL CONSTRUCTOR POR DEFECTO

class Clase {
public:
    Clase()=default;               //Asignamos default -> Cogerá el valor de las variables inicializadas en su declaración

private:
    std::string _nombre = "";         //Las variables vienen inicializadas
    int _num = 0;
};

//Clase.cpp

//Se suprime el constructor en .cpp
//---------------------------------------------------------------------------------------------------------------------------------------
//main.cpp
Clase c1;
Clase cvector[5];
