#ifndef CLASE_H
#define CLASE_H

class Clase{
public:
 
    Clase( std::string nombre, int num );
    
private:
    std::string _nombre = "";
    int _num = 0;
};

#endif /* CLASE_H */

//Clase.cpp

#include "Clase.h"

Clase::Clase(nombre,direccion):
_nombre(nombre),_direccion(direccion){
}

//main.cpp

#include "Clase.h"
Clase c("Alberto",19); //Crea un objeto de nombre Alberto y num 19
//----------------------------------------------------------------------------------------------------------------------------------------
//SEGUNDO MÉTODO PARA CONSTRUCTOR PARAMETRIZADO
//----------------------------------------------------------------------------------------------------------------------------------------
class Clase{
public:
 
    Clase( std::string nombre, int num = 20 );  //Asignar los valores directamente en el constructor, deberán 
                                                                     //ponerse de derecha a izquierda
private:
    std::string _nombre = "";
    int _num = 0;
};

//Clase.cpp

#include "Clase.h"

Clase::Clase(nombre,direccion):
_nombre(nombre),_direccion(direccion){
}

//main.cpp
Clase c("Alberto"); //Crea un objeto de nombre Alberto y de num 20
