/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vehiculo.h
 * Author: Alberto Limas
 *
 * Created on 21 de febrero de 2021, 18:49
 */

#ifndef VEHICULOS_H
#define VEHICULOS_H

#include <iostream>
#include <string>

using namespace std;
namespace Vehiculos {
    /**Estructura para almacenar un vehículo*/
    struct Vehiculo {
       
    string matricula = " "; ///< matrícula del vehículo
    string marca = " "; ///< marca del vehículo
    string modelo = " "; ///< modelo del vehículo
    float precio = 0; ///< precio del vehículo.
    int anio = 1900; ///< año de fabricación del vehículo
};
    
    void rellenarVector(Vehiculo v[], int tamv);
    void mostrarEnPantalla( Vehiculo v[], int tamv );
    int maxPrecio( Vehiculo v[], int tamv );
    int buscarPorMatricula( string matricula, Vehiculo v[], int tamv );
    
    int numVehiculosEnPrecio(Vehiculo v[], int numVehiculos, float precioInferior, float precioSuperior);


};

#endif /* VEHICULOS_H */

