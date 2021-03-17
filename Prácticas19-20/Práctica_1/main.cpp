
/* 
 * File:   main.cpp
 * Author: Antonio Gomez
 *
 * Created on 15 de febrero de 2021, 16:21
 */

#include <cstdlib>
#include <iostream>
#include <string.h>
#include <windows.h>
#include "Vehiculos.h"
using namespace Vehiculos;






/**
 * 
 * @param mini Es la mínima cantidad de datos que se pueden introducir
 * @param maxi Es la máxima cantidad de datos que se pueden introducir
 * @param devolver Es el dato que se encuentra entre el máximo y el mínimo que se devuelve.
 */
void filtro(int mini, int maxi, int &devolver)
{
        while(devolver <= mini || devolver >= maxi){
            cout << "Introduzca de nuevo el dato: "; cin >> devolver;
    }
}

const int MAX_VEHICULO = 1000;

int main(int argc, char** argv) {
    
    try{
        int tam;
        std::cout << "Tamaño del vector:";
        cin >> tam;
        
        Vehiculo* v = new Vehiculo[MAX_VEHICULO];
        
        delete v;
    }catch( string &e){
        std::cerr << e;
    }
    
    
    
//    int cantCoches = 0;
//    Vehiculos coches[MAX_VEHICULO];
//    
//    cout << "Introduzca la cantidad de vehículos: ";
//    cin >> cantCoches;
//    filtro(0,1000,cantCoches); 
//    
//    leerPorTeclado(coches,cantCoches);
//    
//    float precioMaximo = coches[0].precio;
//    
//    /*En este caso nos convendría más un for normal
//    *ya que tenemos la cantidad de datos y el primer dato
//    *no hace falta recorrerlo.*/
//    
//    for (int x : coches) {
//        if(coches[x].precio > precioMaximo){
//            precioMaximo = coches[x].precio;
//        }
//    }

    
    return 0;
}

