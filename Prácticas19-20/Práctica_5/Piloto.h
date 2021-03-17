/** 
 * @file Piloto.h
 * @author Yoyapro Gramo
 *
 * @date Fecha estelar 20160309
 */

#ifndef PILOTO_H
#define PILOTO_H

#include <string>
#include <sstream>

#include "StarFighter.h"
#include "Droide.h"
#include "Informe.h"

/**
 * @brief
 */
class Piloto
{
   private:
      static int _numPilotos; ///< Número de objetos Piloto que han sido instanciados
      int _idP = 0;                       ///< Identificador único del Piloto
      std::string _nombre;                ///< Nombre del Piloto
      std::string _nacionalidad;          ///< Nacionalidad del Piloto
      int _numMisiones = 0;        ///< Número de misiones en que ha participado
      long _fechaUltimaMision = 0;        ///< Fecha estelar de su última misión
      std::string _incidenciasUltimaMision; ///< Incidencias reportadas por el piloto en su última misión.
      
      StarFighter* nave = nullptr;
      Droide* droide = nullptr;
      
   public:
      Piloto ( );
      Piloto ( std::string nombre );
      Piloto ( const Piloto& orig );
      virtual ~Piloto ( );
      Piloto& setNumMisiones ( int numMisiones );
      int getNumMisiones ( ) const;
      Piloto& setNacionalidad ( std::string nacionalidad );
      std::string getNacionalidad ( ) const;
      Piloto& setNombre ( std::string nombre );
      std::string getNombre ( ) const;
      int getIdP ( ) const;
      Piloto& setIncidenciasUltimaMision ( std::string incidenciasUltimaMision );
      std::string getIncidenciasUltimaMision ( ) const;
      Piloto& setFechaUltimaMision ( long fechaUltimaMision );
      long getFechaUltimaMision ( ) const;
      std::string toCSV () const;
      Piloto& operator= ( const Piloto& otro );
      
      
      
      Informe generaInforme();
      void fromCSV( std::string& datos );
      
      Piloto& setDroide(Droide* droide);
      Droide* getDroide() const;
      Piloto& setNave(StarFighter* nave);
      StarFighter* getNave() const;
};

#endif /* PILOTO_H */

