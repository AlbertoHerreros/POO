/**
 * @file main.cpp
 * @author 
 *
 */

#include <iostream>
#include "EquipoMutante.h"

using namespace std;

/***@brief Visualiza la información completa de un mutante*/
void visualiza( Mutante* m) {
    std::cout << "MUTANTE: " 
              << m->toCSV() << std::endl;
    std::cout << "  Poderes : " << std::endl;
    
        std::cout << m->poderCSV();
    

}
/***@brief Visualiza los datos de todos los miembros de un equipo mutante*/
void visualiza( EquipoMutante& eq) {
    std::cout << "EQUIPO: " << eq.getNombre() 
              << " (Base: " << eq.getBase()<< ")" <<std::endl
              << "============================"
              << std::endl;
    //ToDo, Mostrar los mutantes del equipo (usar función anterior)
    for( int i=0;i<eq.getNumMiembros();i++ ){
        Mutante* mut = eq.getMutante(i);
        visualiza(mut);
        std::cout << std::endl;
    }
    
}

//ToDo, Método para almacenar un vector de punteros a mutantes
//almacenaMutantesCSV()


int main(int argc, char** argv) {

    
   // Crea un array de 5 punteros a mutantes, asignándoles los valores a sus
   // atributos directamente en el código fuente
    
    Mutante* vMutantes[5];
    
    for( int i=0;i<5;i++ ){
        vMutantes[i] = new Mutante();
    }
    
    
   // Crea dos equipos mutantes, asignando al primero los mutantes que ocupan
   // las posiciones pares del array, y al segundo los de las posiciones impares
    
    EquipoMutante eq1;
    EquipoMutante eq2;
    
    
        eq1.addMutante(vMutantes[0]);
        eq1.addMutante(vMutantes[2]);
        eq1.addMutante(vMutantes[4]);
    
    
        eq2.addMutante(vMutantes[1]);
        eq2.addMutante(vMutantes[3]);
    
    
   // Añade varios poderes a cada mutante, utilizando los métodos ya
   // implementados: usando datos o objetos de tipo Poder
   // Muestra por la consola la información de cada equipo mutante en formato CSV
    
    Poder pod1 = Poder("Yatuchave","Bacano","Nadie",10);
    
    vMutantes[0]->addPoder(pod1);
    
    
    
    visualiza(eq1);
    
   //Guardamos datos de mutantes en fichero CSV
    
    
   // Destruye todos los objetos creados en memoria dinámica antes de la
   // finalización del programa

    
    
    return 0;
}

