#ifndef PILOTO_H
#define PILOTO_H

class Piloto
{
   private:
      std::string _nombre;                ///< Nombre del Piloto
      std::string _nacionalidad;          ///< Nacionalidad del Piloto
      int _numMisiones = 0;        ///< Número de misiones en que ha participado
      long _fechaUltimaMision = 0;        ///< Fecha estelar de su última misión
      std::string _incidenciasUltimaMision; ///< Incidencias reportadas por el piloto en su última misión.
      
   public:

      Piloto& setNumMisiones ( int numMisiones );       /// Cambiamos el void por una referencia al propio objeto
      Piloto& setNacionalidad ( std::string nacionalidad ); /// void -> Piloto&
      Piloto& setNombre ( std::string nombre );
      Piloto& setIncidenciasUltimaMision ( std::string incidenciasUltimaMision );
      Piloto& setFechaUltimaMision ( long fechaUltimaMision );  
          
};

#endif /* PILOTO_H */

//Piloto.cpp

Piloto& Piloto::setNombre( std::string nombre ){
  this->_nombre = nombre;
  return( *this);       /// Necesario devolver su referencia
}
