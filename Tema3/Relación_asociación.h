//Ojetos de la clase A trabajan de forma continuada con objetos de la clase B

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
