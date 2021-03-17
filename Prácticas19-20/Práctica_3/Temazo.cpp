
/* 
 * File:   Temazo.cpp
 * Author: Alberto Limas
 * 
 * Created on 21 de junio de 2020, 20:41
 */

#include "Temazo.h"


Temazo::Temazo(string titulo, string interprete, int duracion, string nombreUltimoGarito, Fecha fechaUltimoUso, int puntuacion):
_titulo(titulo),_interprete(interprete),_duracion(duracion),_nombreUltimoGarito(nombreUltimoGarito),_fechaUltimoUso(fechaUltimoUso) ,_puntuacion(puntuacion){

}


Temazo::Temazo(const Temazo& orig):
_titulo(orig._titulo),_interprete(orig._interprete),_duracion(orig._duracion),
        _nombreUltimoGarito(orig._nombreUltimoGarito),_fechaUltimoUso(orig._fechaUltimoUso),_puntuacion(orig._puntuacion) {
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

void Temazo::SetFechaUltimoUso(Fecha _fechaUltimoUso) {
    this->_fechaUltimoUso = _fechaUltimoUso;
}

Fecha Temazo::GetFechaUltimoUso() const {
    return _fechaUltimoUso;
}

void Temazo::SetNombreUltimoGarito(string _nombreUltimoGarito) {
    this->_nombreUltimoGarito = _nombreUltimoGarito;
}

string Temazo::GetNombreUltimoGarito() const {
    return _nombreUltimoGarito;
}

