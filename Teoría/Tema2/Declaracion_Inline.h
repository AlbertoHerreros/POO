#ifndef CLASE_H
#define CLASE_H

class Clase{
public:
    Clase() = default;
    void duplicar();
    int getNum() const;
private:
    int _num = 1;
    
};

void Clase::duplicar(){
    _num *= 2;
}

int Clase::getNum() const {
    return _num;
}

#endif /* CLASE_H */

//-------------------------------------------------------------------------------------------
//main.cpp

#include "Clase.h"

Clase c;
c.duplicar;
std::cout << c.getNum() << std::endl;

//Se crea un objeto de tipo clase con valor 1, se duplica su valor y se muestra un 2


//-------------------------------------------------------------------------------------------
//SEGUNDA FORMA, TODO INCLUIDO EN LA DECLARACIÓN INICIAL
//-------------------------------------------------------------------------------------------
#ifndef CLASE_H
#define CLASE_H

class Clase{
public:
    Clase() = default;
    void duplicar(){ _num *= 2; }
    int getNum() const{ return _num; }
private:
    int _num = 1; 
};

#endif /* CLASE_H */

