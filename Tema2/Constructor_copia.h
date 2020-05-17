#ifndef GARITO_H
#define GARITO_H

class Garito {
public:
    
    Garito()=default;
    Garito(const Garito& orig);

private:
    string _nombre="";
    string _direccion="";
};

#endif /* GARITO_H */

//Garito.cpp

#include "Garito.h"

Garito::Garito(const Garito& orig):
_nombre(orig._nombre),_direccion(orig._direccion){
}

//main.cpp

Garito g1;
Garito g2 (g1);
Garito g2=g1; ///< Si no existen operadores sobrecargados

Garito* g1 = new Garito();
Garito* g2 = g1; ///< Uso del constructor de copia, el objeto g2 será igual que el objeto g1
