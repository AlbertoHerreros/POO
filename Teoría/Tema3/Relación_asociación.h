//Ojetos de la clase A trabajan de forma continuada con objetos de la clase B

#include "Clase2.h"

class Clase1
{
  private:
    std::string _nombre;
    Clase2* <rol> = nullptr; ///< Atributo que establece la relación
}

//.cpp
/*
  Una buena práctica es introducir en el destructor de clase una excepción lanzada por cerr para evitar errores con excepciones 
  en destructores que determinará si se le ha quitado o no la asociación de un objeto <Clase2> a <Clase1>.
  Si no, tendríamos un objeto <Clase2> que quedaría perdido.
  EL DESTRUCTOR NO DESTRUYE LOS OBJETOS ASOCIADOS
*/
  Clase1::~Clase1(){
    if( <rol> != nullptr ){     ///< ¿Tiene objeto asociado?
      cerr << "No se le ha quitado el objeto <Clase2> a objeto <Clase1>";
    }
  }

  Clase2* Clase1::quitar(){
    Clase2 aux = <rol>;             ///< Destrucción de objeto asociado
    <rol> = nullptr;
    return aux;
  }

/*
UML:
  -Nombre de asociación: "hecho por, escrito por..."
  -Multiplicidad: máximo de objetos de esa clase que existirá "Máximo de jugadores de equipo: 11"
  -Sentido: flecha. Si es bidireccional se puede omitir
  -Rol: rol de una clase con la otra "ser jugador de equipo"
*/
/*
  Implementación a través de punteros a objetos y generalmente el atributo puntero tendrá el nombre del
  rol que desempeña en la otra clase( notación UML).
  Si bidireccional, se añade un puntero a cada clase.
  Multiplicidad 1 a muchos, estructura con punteros( vector ).
  Relación asignando a punteros clase origen las direcciones de los objetos asociados a ella, con constructores
  o métodos.
  Objetos creados y destruidos de forma independiente.
*/
