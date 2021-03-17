
/* 
 * File:   ParametroNoValido.cpp
 * Author: Alberto Limas
 * 
 * Created on 21 de junio de 2020, 23:55
 */

#include "ParametroNoValido.h"

ParametroNoValido::ParametroNoValido(string fichero, string funcion, string descripcion):
_fichero(fichero),_funcion(funcion),_descripcion(descripcion){

}

ParametroNoValido::ParametroNoValido(const ParametroNoValido& orig):
_fichero(orig._fichero),_funcion(orig._funcion),_descripcion(orig._descripcion){
}

ParametroNoValido::~ParametroNoValido() {
}

string ParametroNoValido::queOcurre() {
    std::stringstream ss;
    ss << _fichero << ";" << _funcion << ";" << _descripcion ;
    return ss.str();
}
