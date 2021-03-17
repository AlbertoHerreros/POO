/** 
 * @file main.cpp
 * @author Casipro Gramo
 *
 * @date Fecha estelar 20160309
 */

#include <cstdlib>
#include <string>
#include <iostream>

#include "Pieza.h"
#include "Piloto.h"
#include "Droide.h"
#include "StarFighter.h"
#include "Escuadron.h"
#include "Informe.h"

using namespace std;

/**
 * @todo Ver el enunciado del ejercicio 5 de la práctica
 */
int main ( int argc, char** argv )
{
    string datosPilotos[5] = {"Dameron Poe;Jakku;100;123456;---",
                              "Anakin Skywalker;Tatooine;133;126756;Derribados 3 cazas enemigos",
                              "Han Solo;Corellia;247;126786;Impacto en motor izquierdo",
                              "Chewbacca;Kashyyk;115;136786;---",
                              "Leia Organa;Alderaan;3;126336;Derribados 10 cazas enemigos"};

    
    Piloto* vPilotos[5];
    
    for( int i=0;i<5;i++ ){
        
        vPilotos[i] = new Piloto();
        vPilotos[i]->fromCSV(datosPilotos[i]);
        
    }
    
    Escuadron escuadron1 = Escuadron("Nombre1",0,"Villanueva");
    Escuadron escuadron2 = Escuadron("Nombre2",0,"Villacarrillo");
    
    escuadron1.addPiloto(vPilotos[0]);
    escuadron1.addPiloto(vPilotos[1]);
    
    escuadron2.addPiloto(vPilotos[2]);
    escuadron2.addPiloto(vPilotos[3]);
    escuadron2.addPiloto(vPilotos[4]);
    
    std::cout << escuadron1.getNombre() << std::endl << escuadron1.promedioMisiones() << std::endl 
            << escuadron2.getNombre() << std::endl << escuadron2.promedioMisiones() << endl;
    
    StarFighter* nave1 = new StarFighter();
    StarFighter* nave2 = new StarFighter();
    
    Pieza* pieza = new Pieza();
    
    nave1->addPieza(pieza);
    nave1->addPieza(pieza);
    nave1->addPieza(pieza);
    
    nave2->addPieza(pieza);
    nave2->addPieza(pieza);
    nave2->addPieza(pieza);
    
    std::cout << nave1->calculaPeso() << std::endl << nave2->calculaPeso();
    
    return 0;
}

