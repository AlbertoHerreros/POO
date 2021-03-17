/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "djutils.h"

void djutils::mostrarTemazo(const Temazo& temazo){
    cout << "DATOS DEL TEMAZO: " << endl 
            << "TÍTULO: " << temazo.GetTitulo() << endl 
            << "INTÉRPRETE: " << temazo.GetInterprete() << endl
            << "DURACIÓN: " << temazo.GetDuracion() << endl
            << "PUNTUACIÓN: " << temazo.GetPuntuacion() << endl
            << "NOMBRE ÚLTIMO GARITO: " << temazo.GetNombreUltimoGarito() << endl
            << "ID TEMAZO: " << temazo.GetIdTemazo() << endl
            << "FECHA ÚLTIMO USO: " << endl;
    djutils::mostrarFecha(temazo.GetFechaUltimoUso());
            
}

void djutils::mostrarGarito(const Garito& garito){
    cout << "DATOS DEL GARITO: " << endl
            << "NOMBRE: " << garito.GetNombre() << endl
            << "DIRECCIÓN: " << garito.GetDireccion() << endl;
}

void djutils::mostrarGarito(const Garito *garito){
    cout << "DATOS DEL GARITO: " << endl
            << "NOMBRE: " << garito->GetNombre() << endl
            << "DIRECCIÓN: " << garito->GetDireccion() << endl;
}

void djutils::mostrarFecha(const Fecha& fecha){
    cout << "FECHA: " << endl
            << "AÑO: " << fecha.GetYear() << endl
            << "MES: " << fecha.GetMes() << endl
            << "DÍA: " << fecha.GetDia() << endl;
}

void djutils::modificarGarito(Garito garito){
    string variable;
    cout << "Nombre: " << endl;
    cin >> variable;
    garito.SetNombre(variable);
    cout << "Dirección: " << endl;
    cin >> variable;
    garito.SetDireccion(variable);
}

void djutils::mostrarTemazosAnteriores(Temazo t[], int tam, Fecha fecha){
    for(int i=0;i<tam;i++){
        if(t[i].GetFechaUltimoUso() < fecha){
            djutils::mostrarTemazo(t[i]);
        }
    }
}