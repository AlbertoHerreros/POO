/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Temazo.h
 * Author: Alberto Limas
 *
 * Created on 21 de junio de 2020, 20:41
 */

#ifndef TEMAZO_H
#define TEMAZO_H

#include <iostream>
#include <sstream>

#include "Fecha.h"
#include "ParametroNoValido.h"

using std::string;
class Temazo {
public:
    //Variable de clase
    static int _numTemazos;
    
    Temazo();
    Temazo(string titulo, string interprete, int duracion, string nombreUltimoGarito, Fecha fechaUltimoUso, int puntuacion=0);
    Temazo(const Temazo& orig);
    virtual ~Temazo();
    
    
    int GetPuntuacion() const;
    void SetDuracion(int _duracion);
    int GetDuracion() const;
    void SetInterprete(string _interprete);
    string GetInterprete() const;
    void SetTitulo(string _titulo);
    string GetTitulo() const;
    
    void SetFechaUltimoUso(Fecha _fechaUltimoUso);
    Fecha GetFechaUltimoUso() const;
    void SetNombreUltimoGarito(string _nombreUltimoGarito);
    string GetNombreUltimoGarito() const;
    
    void incrementarPuntuacion(int puntuacion);
    int GetIdTemazo() const;
    string toCSV();
    
private:
    string _titulo="";
    string _interprete="";
    int _duracion=0;
    int _puntuacion=0;
    string _nombreUltimoGarito="";
    Fecha _fechaUltimoUso=Fecha();
    
    int _idTemazo=0;
};

#endif /* TEMAZO_H */

