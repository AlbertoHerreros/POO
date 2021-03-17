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
    
    Temazo v[20];
    
    djutils::mostrarTemazo(v[0]);
    cout << "AÑSKLDFJSADFALSDFKJSDÑLFKJSF ÑLASDKJFLKJSAFDL"
            "ASÑFDKJÑLSAKDF"
            "ASLDFKJ"
            "";
    
    Garito* pDJ = new Garito("CasaDJ","DirecciónDJ");
    
    Garito* pGar = new Garito[10];
    
    for(int i=0;i<10;i++){
        pGar[i] = Garito();
    }
    
    pGar[0]=Garito();
    pGar[1]=Garito();
    
    v[0].SetNombreUltimoGarito(pDJ->GetDireccion());
    
    v[1].SetNombreUltimoGarito(pGar[0].GetDireccion());
    v[2].SetNombreUltimoGarito(pGar[1].GetDireccion());
    
    v[0].SetFechaUltimoUso(Fecha(4,4,2001));
    v[1].SetFechaUltimoUso(Fecha(4,4,2001));
    v[2].SetFechaUltimoUso(Fecha(4,4,2001));
    
    int t=10;
    Fecha f=Fecha(1,1,2016);
    
    djutils::mostrarTemazosAnteriores(v,t,f);
    
    return 0;
}

