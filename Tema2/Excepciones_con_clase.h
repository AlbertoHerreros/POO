//ParametroNoValido.h

class ParametroNoValido {
public:
    
    ParametroNoValido() = default;
    ParametroNoValido( string descripcion, string funcion = "", string fichero = "" );
    ParametroNoValido( const ParametroNoValido& orig );
    virtual ~ParametroNoValido();
    
    string queOcurre( string fichero,  string funcion,  string descripcion);
    
private:
    string _fichero = "";
    string _funcion = "";
    string _descripcion = "";
};

//ParametroNoValido.cpp

ParametroNoValido::ParametroNoValido( string fichero, string funcion, string descripcion ):
_fichero(fichero),_funcion(funcion),_descripcion(descripcion){

}

ParametroNoValido::ParametroNoValido( const ParametroNoValido& orig ):
_fichero(orig._fichero),_funcion(orig._funcion),_descripcion(orig._descripcion){
}

ParametroNoValido::~ParametroNoValido() {
}

string ParametroNoValido::queOcurre() {
    std::stringstream ss;
    ss << _fichero << ";" << _funcion << ";" << _descripcion ;
    return ss.str();
}

//--------------------------------------------------------------------------------------------------
//.cpp de otra clase en la que queramos usar la excepcion
#include "ParametroNoValido.h"

void Clase::SetDireccion( string direccion ){
    if( direccion == "" ){
        throw ParametroNoValido( "Clase.h",”Clase::SetDirección”,”descripcion” ); //Lanza una excepción de la Clase ParámetroNoValido
    }
    else{
        this->_direccion = direccion;
    }
}

//main.cpp
#include "ParametroNoValido.h"
try{
	//Código a realizar

}catch (ParametroNoValido &e){ //Si existiera excepción alguna se lanzaría al terminar la ejecución
	cerr << " " << e.get[variable con la descripción o variable que concatene los valores/texto a mostrar]() << std::endl;
}
