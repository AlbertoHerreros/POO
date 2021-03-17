/* 
 * File:   djutils.h
 * Author: Alberto Limas
 *
 * Created on 21 de junio de 2020, 21:43
 */

#ifndef DJUTILS_H
#define DJUTILS_H

#include "Temazo.h"
#include "Garito.h"
#include "Fecha.h"

#include <iostream>
using namespace std;

namespace djutils{
    void mostrarTemazo(const Temazo& temazo);
    void mostrarGarito(const Garito& garito);
    void mostrarGarito(const Garito *garito);
    void mostrarFecha(const Fecha& fecha);
    void modificarGarito(Garito garito);
    
    void mostrarTemazosAnteriores(Temazo t[], int tam , Fecha fecha);
}


#endif /* DJUTILS_H */

