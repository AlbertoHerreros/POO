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
#include "ParametroNoValido.h"

int main(int argc, char** argv) {
    
    Garito* pGar[10];
     
    pGar[0]=new Garito();
    pGar[1]=new Garito();
    
    pGar[0]->SetNombre("Nombre");
    pGar[0]->SetDireccion("Dirección");
    pGar[1]->SetNombre("Nombre2");
    pGar[1]->SetDireccion("Dirección2");
    
    Temazo vTemazos[5];
    
    vTemazos[0] = Temazo("Titulo","Interprete",10,pGar[0]->GetDireccion(),Fecha(4,4,2001));
    vTemazos[1] = Temazo("Titulo2","Interprete",10,pGar[1]->GetDireccion(),Fecha(4,4,2001));
    vTemazos[2] = Temazo("Titulo3","Interprete",10,pGar[0]->GetDireccion(),Fecha(4,4,2001));
    
    for(int i=0;i<2;i++){
        cout << "Garito " << i << " : " << endl 
               << pGar[i]->toCSV() << endl;
    }
    
    cout << endl << endl;
    
    for(int i=0;i<5;i++){
        cout << "Temazo " << i << " : " << endl
                << vTemazos[i].toCSV() << endl;
    }
    
    for(int i=0;i<10;i++){
        if( pGar[i]!=nullptr ){
            delete pGar[i];
            pGar[i]=nullptr;
        }
    }
    
    
    return 0;
}

