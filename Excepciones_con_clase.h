//ParametroNoValido.h

class ParametroNoValido {
public:
    
    ParametroNoValido()=default;
    ParametroNoValido(string descripcion, string funcion="", string fichero="");
    ParametroNoValido(const ParametroNoValido& orig);
    virtual ~ParametroNoValido();
    
    string queOcurre( string fichero,  string funcion,  string descripcion);
    
private:
    string _fichero="";
    string _funcion="";
    string _descripcion="";
};

--------------------------------------------------------------------------------------------------
//.cpp de otra clase en la que queramos usar la excepcion
#include "ParametroNoValido.h"

void Garito::SetDireccion(string direccion){
    if(direccion==""){
        throw ParametroNoValido("Garito.h",”Garito::SetDirección”,”descripcion”); ///< Lanza una excepción de la Clase ParámetroNoValido
    }
    else{
        this->_direccion=direccion;
    }
}

//main.cpp

try{
	//Código a realizar

}catch (ParametroNoValido &e){
	cerr << " " << e.get[variable con la descripcion o variable que concatene los valores/texto a mostrar]() << std::endl;
}
