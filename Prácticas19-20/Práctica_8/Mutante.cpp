/**
 * @file Mutante.cpp
 * @author algarcia
 *
 */

#include <stdexcept>
#include <sstream>

#include "Mutante.h"
#include "EquipoMutante.h"

Mutante::Mutante(string nombre, string apodo, int fechaN, string nacionalidad) 
    : _nombreReal(nombre),
      _apodo(apodo),
      _fechaDeNacimiento(fechaN),
      _nacionalidad(nacionalidad)
      {
    
}

Mutante::Mutante(const Mutante& orig)
    : _nombreReal(orig._nombreReal),
    _apodo(orig._apodo),
    _fechaDeNacimiento(orig._fechaDeNacimiento),
    _nacionalidad(orig._nacionalidad)
 {
    
}

Mutante::~Mutante() {
    
    for( int i=0;i<10;i++ ){
        
        if( _poder[i] != nullptr ){
            delete _poder[i];
            _poder[i]=nullptr;
        }
        
    }
    
}

void Mutante::setNombreReal(string nombreReal) {
    this->_nombreReal = nombreReal;
}

string Mutante::getNombreReal() const {
    return _nombreReal;
}

void Mutante::setNacionalidad(string nacionalidad) {
    this->_nacionalidad = nacionalidad;
}

string Mutante::getNacionalidad() const {
    return _nacionalidad;
}

void Mutante::setFechaDeNacimiento(int fechaDeNacimiento) {
    this->_fechaDeNacimiento = fechaDeNacimiento;
}

int Mutante::getFechaDeNacimiento() const {
    return _fechaDeNacimiento;
}

void Mutante::setApodo(string apodo) {
    this->_apodo = apodo;
}

string Mutante::getApodo() const {
    return _apodo;
}


/**@brief Representación CSV de un mutante
   @post  Genera la representación básica en CSV, sin incluir los poderes*/
string Mutante::toCSV() const{
    std::stringstream aux;
    aux << _nombreReal << ";"
            << _apodo << ";"
            << _fechaDeNacimiento << ";"
            << _nacionalidad;

    return aux.str();
}

Mutante& Mutante::operator=(const Mutante& orig) {
    if (this != &orig) {
        _nombreReal = orig._nombreReal;
        _apodo = orig._apodo;
        _fechaDeNacimiento = orig._fechaDeNacimiento;
        _nacionalidad = orig._nacionalidad;

    }

    return  *this;
}

void Mutante::addPoder(string nombre, string descripcion, string afectaA, float capacidadD) {
    
    if( _nPoderes<10 ){
        
        _poder[_nPoderes] = new Poder( nombre, descripcion, afectaA, capacidadD );
        _nPoderes++;
    }
    
}

void Mutante::addPoderFisico(string nombre, string descripcion, string afectaA, float capacidadD) {
    
    if( _nPoderes<10 ){
        
        _poder[_nPoderes] = new Poder( nombre, descripcion, afectaA, capacidadD );
        _nPoderes++;
    }
    
}

void Mutante::addPoderPsiquico(string nombre, string descripcion, string afectaA, float capacidadD) {
    
    if( _nPoderes<10 ){
        
        _poder[_nPoderes] = new Poder( nombre, descripcion, afectaA, capacidadD );
        _nPoderes++;
    }
    
}

void Mutante::borraPoder(int cual) {
    if( _poder[cual] != nullptr ){
        delete _poder[cual];
        _poder[cual]=nullptr;
    }
}

float Mutante::capacidadDestructivaTotal() {
    
    float destruccion=0;
    
    for( int i=0;i<_nPoderes;i++ ){
        destruccion+=_poder[i]->getCapacidadDestructiva();
    }
    
    return destruccion;
    
}

int Mutante::getNPoderes() const {
    return _nPoderes;
}

void Mutante::addPoder(const Poder& poder) {
    
    if( _nPoderes<10 ){
        
        _poder[_nPoderes] = new Poder( poder );
        _nPoderes++;
    }
    
}

void Mutante::addPoder( const PoderFisico& poder){
    
    if( _nPoderes<10 ){
        
        _poder[_nPoderes] = new PoderFisico( poder );
        _nPoderes++;
    }
    
}

void Mutante::addPoder( const PoderPsiquico& poder){
    
    if( _nPoderes<10 ){
        
        _poder[_nPoderes] = new PoderPsiquico( poder );
        _nPoderes++;
    }
    
}

string Mutante::poderCSV() {
    std::stringstream ss;
    
    for( int i=0;i<_nPoderes;i++ ){
        ss << _poder[i]->getNombre() << ";" << _poder[i]->getDescripcion() << ";" 
                << _poder[i]->getAfectaA() << ";" << _poder[i]->getCapacidadDestructiva() << std::endl;
    }
    return ss.str();
}

bool Mutante::operator<( Mutante& otro)  {
    
    float cap1=0,cap2=0;
    cap1=this->capacidadDestructivaTotal();
    cap2=otro.capacidadDestructivaTotal();
    
    return cap1<cap2;
    
}

int Mutante::recuperaMutantesCSV(Mutante* v[], int tamv, string nombreArchivo ) {
    
    string cad;
    nombreArchivo="mutantes.csv";
    int cont=0;
    
    std::ifstream fe;
    fe.open( nombreArchivo.c_str() );
    
    if( fe.good() ){
        
        while( !fe.eof() ){
            getline( fe, cad );
                if(cad!=""){
                    v[cont]->fromCSV(cad);
                    cad="";
                    cont++;
                }
            
        }
        
    }
    return cont;
}

/**@brief Asigna información a un mutante a partir de su representación CSV
   @post  Asigna la información básica de un mutante a partir de su presentación CSV, sin incluir los poderes*/
void Mutante::fromCSV ( std::string& cadena )
{
   std::stringstream ss ( cadena );
   std::getline ( ss,_nombreReal, ';' );
   std::getline ( ss,_apodo, ';' );
   ss>>_fechaDeNacimiento;
   ss.ignore ( );
   std::getline ( ss, _nacionalidad, ';' );
}
