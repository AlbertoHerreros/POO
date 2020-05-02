//Objetos de la clase A usan objetos de la clase B

#include "Clase2.h"

class Clase1
{
  private:
    std::string _nombre;
  public:
    Clase2* funcion( std::string nombre );
}

//.h

Clase2* Clase1::funcion( std::string nombre ){
  
  Clase2* c = new Clase2 ( nombre );    //Objeto clase 2 con nombre que se le pasa
  
}

/*
Es el tipo de relación más débil, se basa en el uso de una clase por parte de otra y se hace de
forma circunstancial a lo largo de la vida de los objetos que intervienen.
Por lo general solo requiere del uso de atributos y métodos públicos.
A nivel de implementación puede indicar:
  -Paso de objeto como argumento a un método del otro objeto.
  -El uso de objeto local dentro de la implementación de un método de otra clase.
*/
