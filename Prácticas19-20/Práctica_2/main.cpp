/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alberto Limas
 *
 * Created on 21 de junio de 2020, 20:41
 */

#include <cstdlib>
#include <iostream>
using namespace std;

#include "Fecha.h"
#include "Garito.h"
#include "Temazo.h"
#include "djutils.h"


int main(int argc, char** argv) {
    
    Temazo t1=Temazo();
    Temazo t2=Temazo("N","I",1,1);
    
    Garito g1=Garito("N","D");
    Garito g2=Garito(g1);
    
    Fecha f1=Fecha();
    Fecha f2=Fecha(3,3,2001);
    
    djutils::mostrarTemazo(t1);
    djutils::mostrarTemazo(t2);
    
    djutils::mostrarGarito(g1);
    djutils::mostrarGarito(g2);
    
    djutils::mostrarFecha(f1);
    djutils::mostrarFecha(f2);
    
    try{
    djutils::modificarGarito(g2);
    }
    catch(std::string &e){
        cerr << e;
    }
    
    return 0;
}

