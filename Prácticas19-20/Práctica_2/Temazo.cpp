
/* 
 * File:   Temazo.cpp
 * Author: Alberto Limas
 * 
 * Created on 21 de junio de 2020, 20:41
 */

#include "Temazo.h"


Temazo::Temazo(string titulo, string interprete, int duracion, int puntuacion):
_titulo(titulo),_interprete(interprete),_duracion(duracion),_puntuacion(puntuacion){

}


Temazo::Temazo(const Temazo& orig):
_titulo(orig._titulo),_interprete(orig._interprete),_duracion(orig._duracion),_puntuacion(orig._puntuacion) {
}

Temazo::~Temazo() {
}

int Temazo::GetPuntuacion() const {
    return _puntuacion;
}

void Temazo::SetDuracion(int _duracion) {
    this->_duracion = _duracion;
}

int Temazo::GetDuracion() const {
    return _duracion;
}

void Temazo::SetInterprete(string _interprete) {
    this->_interprete = _interprete;
}

string Temazo::GetInterprete() const {
    return _interprete;
}

void Temazo::SetTitulo(string _titulo) {
    this->_titulo = _titulo;
}

string Temazo::GetTitulo() const {
    return _titulo;
}

