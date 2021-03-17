#ifndef CLASE_H
#define CLASE_H

class Clase{
public:
    
    Clase()=default; //Constructor por defecto
    Clase(const Clase& orig); //Constructor copia

private:
    string _nombre="";
    int _num=0;
};

#endif /* CLASE_H */

//Clase.cpp

#include "Clase.h"

Clase::Clase(const Clase& orig):
_nombre(orig._nombre),_num(orig._num){
}

//main.cpp

Clase c1;
Clase c2(c1);
Clase c2 = c1; //Si no existen operadores sobrecargados

Clase* c3 = new Clase();
Clase* c4 = c3; //Uso del constructor de copia, el objeto g2 será igual que el objeto g1. Operator= no sobrecargado
