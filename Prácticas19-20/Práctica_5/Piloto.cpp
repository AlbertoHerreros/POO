/** 
 * @file Piloto.cpp
 * @author Yoyapro Gramo
 * 
 * @date Fecha estelar 20160309
 */

#include <stdexcept>
#include <sstream>

#include "Piloto.h"

using std::string;

int Piloto::_numPilotos = 0;

Piloto::Piloto ( ): Piloto ( "" )
{ }

Piloto::Piloto ( string nombre ): _nombre (nombre)
{
   _numPilotos++;
   _idP = _numPilotos;
}

Piloto::Piloto ( const Piloto& orig ): _nombre(orig._nombre),
                                       _nacionalidad(orig._nacionalidad),
                                       _numMisiones(orig._numMisiones),
                                       _fechaUltimaMision(orig._fechaUltimaMision),
                                       _incidenciasUltimaMision(orig._incidenciasUltimaMision)
{
   _numPilotos++;
   _idP = _numPilotos;
}

Piloto::~Piloto ( )
{ }

/**
 * @todo Aquí hay que añadir la comprobación del parámetro y lanzar la excepción
 *       correspondiente. El número de misiones no puede ser <= 0
 */
Piloto& Piloto::setNumMisiones ( int numMisiones )
{
   this->_numMisiones = numMisiones;
   return (*this);
}

int Piloto::getNumMisiones ( ) const
{
   return _numMisiones;
}

Piloto& Piloto::setNacionalidad ( string nacionalidad )
{
   this->_nacionalidad = nacionalidad;
   return (*this);
}

string Piloto::getNacionalidad ( ) const
{
   return _nacionalidad;
}

Piloto& Piloto::setNombre ( string nombre )
{
   this->_nombre = nombre;
   return (*this);
}

string Piloto::getNombre ( ) const
{
   return _nombre;
}

int Piloto::getIdP ( ) const
{
   return _idP;
}

/**
 * @todo Si el número de misiones del piloto es 0, no puede tener incidencias;
 *       haz esta comprobación y lanza la excepción correspondiente
 */
Piloto& Piloto::setIncidenciasUltimaMision ( string incidenciasUltimaMision )
{
   this->_incidenciasUltimaMision = incidenciasUltimaMision;
   return (*this);
}

string Piloto::getIncidenciasUltimaMision ( ) const
{
   return _incidenciasUltimaMision;
}

/**
 * @todo Si el número de misiones del piloto es 0, no puede tener fecha de
 *       última misión; haz esta comprobación y lanza la excepción
 *       correspondiente
 */
Piloto& Piloto::setFechaUltimaMision ( long fechaUltimaMision )
{
   this->_fechaUltimaMision = fechaUltimaMision;
   return (*this);
}

/**
 * @todo Si el número de misiones del piloto es 0, no puede tener fecha de
 *       última misión; haz esta comprobación y lanza la excepción
 *       correspondiente
 */
long Piloto::getFechaUltimaMision ( ) const
{
   return _fechaUltimaMision;
}

string Piloto::toCSV () const
{
   std::stringstream aux;

   aux << _nombre << " ; "
       << _nacionalidad << " ; "
       << _numMisiones << " ; "
       << _fechaUltimaMision << " ; "
       << _incidenciasUltimaMision;

   return ( aux.str () );
}

Piloto& Piloto::operator = ( const Piloto& otro )
{
   if ( this != &otro )
   {
      _nombre = otro._nombre;
      _nacionalidad = otro._nacionalidad;
      _numMisiones = otro._numMisiones;
      _fechaUltimaMision = otro._fechaUltimaMision;
      _incidenciasUltimaMision = otro._incidenciasUltimaMision;
   }
   
   return ( *this );
}
/*
 
 ---------------------------------------------------------------
 
 */


Informe Piloto::generaInforme() {
    Informe aux = Informe();
    aux.setIdPiloto( this->getIdP() );
    aux.setFechaEstelar( this->getFechaUltimaMision() );
    
    std::stringstream ss;
    ss << droide->getIdD() << ";" << this->nave->getIdSF() << ";" << this->getIncidenciasUltimaMision();
    
    string informe = ss.str();
    
    aux.setDatosInforme(informe);
    return aux;
    
}

void Piloto::fromCSV( std::string& datos ) {
    
    std::stringstream ss;
    ss << datos;
    
    getline( ss, this->_nombre,';');
    getline( ss, this->_nacionalidad,';');
    ss >> this-> _numMisiones;
    ss.ignore(1);
    ss >> this-> _fechaUltimaMision;
    ss.ignore(1);
    getline( ss, this->_incidenciasUltimaMision ); 
    
}

Piloto& Piloto::setDroide(Droide* droide) {
    this->droide = droide;
    return ( *this );
}

Droide* Piloto::getDroide() const {
    return droide;
}

Piloto& Piloto::setNave(StarFighter* nave) {
    this->nave = nave;
    return ( *this );
}

StarFighter* Piloto::getNave() const {
    return nave;
}

/*
    static int _numPilotos; ///< Número de objetos Piloto que han sido instanciados
      int _idP = 0;                       ///< Identificador único del Piloto
      std::string _nombre;                ///< Nombre del Piloto
      std::string _nacionalidad;          ///< Nacionalidad del Piloto
      int _numMisiones = 0;        ///< Número de misiones en que ha participado
      long _fechaUltimaMision = 0;        ///< Fecha estelar de su última misión
      std::string _incidenciasUltimaMision; ///< Incidencias reportadas por el piloto en su última misión.
      
      StarFighter* nave = nullptr;
      Droide* droide = nullptr;
      */