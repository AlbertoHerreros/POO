/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vehiculos.cpp
 * Author: Alberto Limas
 * 
 * Created on 21 de febrero de 2021, 18:49
 */

#include "Vehiculos.h"

/**
 * @brief función que rellenará un vector leyendo desde teclado cada uno de los vehículos que lo forman
 * @param v puntero de vehículos
 * @param TAM tamaño del vector
 */
void Vehiculos::rellenarVector(Vehiculo v[], int tamv){
    if( tamv < 0 )
        throw string("[Vehiculo.h/rellenarVector]: Tamaño del vector negativo");
    for (int i = 0; i < tamv; i++) {
        cout << "Introduzca la matrícula del" << i+1 << " vehículo: ";
        getline(cin>>ws, v[i].matricula);
        
        cout << "Introduzca la marca del" << i+1 << " vehículo: ";
        getline(cin>>ws, v[i].marca);
        
        cout << "Introduzca el modelo del" << i+1 << " vehículo: ";
        getline(cin>>ws, v[i].modelo);
        
        cout << "Introduzca el precio del" << i+1 << " vehículo: ";
        cin >> v[i].precio;
        
        cout << "Introduzca el año de fabricación del" << i+1 << " vehículo: ";
        cin >> v[i].anio;
        
        system("Pause"); ///Para esperar 
        system("clear"); ///Añadir otro coche.

    }
}

/**
 * @brief Función que muestra por pantalla la lista de vehículos de 5 en 5, esperando a pulsar una tecla para continuar
 * @param v vector de los vehículos que hay
 * @param tamv tamaño del vector
 */
void Vehiculos::mostrarEnPantalla(Vehiculo v[], int tamv){
    for( int i = 0; i < tamv; i+5){
        std::cout << v[i].matricula << " ; " << v[i].marca << " ; " << v[i].modelo << " ; " << v[i].precio << " ; " << v[i].anio << std::endl;
        if( i+1 < tamv )
            std::cout << v[i+1].matricula << " ; " << v[i+1].marca << " ; " << v[i+1].modelo << " ; " << v[i+1].precio << " ; " << v[i+1].anio << std::endl;
        if( i+2 < tamv )
            std::cout << v[i+2].matricula << " ; " << v[i+2].marca << " ; " << v[i+2].modelo << " ; " << v[i+2].precio << " ; " << v[i+2].anio << std::endl;
        if( i+3 < tamv )
            std::cout << v[i+3].matricula << " ; " << v[i+3].marca << " ; " << v[i+3].modelo << " ; " << v[i+3].precio << " ; " << v[i+3].anio << std::endl;
        if( i+4 < tamv )
            std::cout << v[i+4].matricula << " ; " << v[i+4].marca << " ; " << v[i+4].modelo << " ; " << v[i+4].precio << " ; " << v[i+4].anio << std::endl;
        std::cout << "Pulse para continuar" << std::endl;
        system("Pause"); ///Para esperar 
    }
}
/**
 * @brief Función que calcula la posición del vehículo de mayor precio
 * @param v vector de los vehículos que hay
 * @param tamv tamaño del vector
 * @return posición del vehículo más caro
 */
int Vehiculos::maxPrecio(Vehiculo v[], int tamv){
    int maximo = 0;
    int posicion = 0;
    
    for( int i = 0; i < tamv; i++ ){
        if( v[i].precio > maximo ){
            maximo = v[i].precio;
            posicion = i;
        }
    }
    return posicion;
}

/**
 * @brief Función que calcula la posición del coche con matrícula a buscar
 * @param matricula : matrícula a buscar
 * @param v vector de los vehículos que hay
 * @param tamv tamaño del vector
 * @return posición del coche con matrícula igual a matricula
 */
int Vehiculos::buscarPorMatricula(string matricula, Vehiculo v[], int tamv){
    int posicion = -1;
    for( int i = 0; i < tamv; i++ ){
        if( v[i].matricula == matricula ){
            posicion = i;
        }
    }
    if( posicion == -1)
        throw string("[Vehiculo.cpp/buscarPorMatricula]: Matrícula no encontrada");
    else
        return posicion;
}

/**
 * 
 * @param v vector de los vehículos que hay
 * @param numVehiculos cantidad de vehículos que hay en el vector
 * @param precioInferior margen inferior de precios.
 * @param precioSuperior margen superior de precios.
 * @return 
 */
int Vehiculos::numVehiculosEnPrecio(Vehiculo v[], int numVehiculos, float precioInferior, float precioSuperior){
    
    int cant = 0;///< cantidad de coches que se encuentra en el intervalo.
    
    for (int i = 0; i < numVehiculos; i++) {
        if(v[i].precio >= precioInferior && v[i].precio <= precioSuperior){
            cant++;
        }
    }
    return cant;
}
