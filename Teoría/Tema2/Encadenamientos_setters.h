#ifndef CLASE_H
#define CLASE_H

class Clase{
   private:
      std::string _nombre;
      std::string _nacionalidad;
      
   public:

      Clase& setNombre ( std::string nombre );
      Clase& setNacionalidad ( std::string nacionalidad );
   
};

#endif /* CLASE_H */

//Clase.cpp

Clase& Clase::setNombre( std::string nombre ){
  _nombre = nombre;
  return(*this);       /// Necesario devolver su referencia
}

Clase& Clase::setNacionalidad( std::string nacionalidad ){
   _nacionalidad = nacionalidad;
   return(*this);
}

//main.cpp
#include "Clase.h"

Clase c;
c.setNombre("Alberto")
   .setNacionalidad("Español");
