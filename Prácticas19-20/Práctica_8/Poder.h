/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Poder.h
 * Author: Alberto Limas
 *
 * Created on 22 de junio de 2020, 19:37
 */

#ifndef PODER_H
#define PODER_H

#include <iostream>
#include <sstream>

class Poder {
public:
    Poder()=default;
    Poder( std::string nombre, std::string descripcion, std::string afectaA, float capacidadDestructiva);
    Poder(const Poder& orig);
    virtual ~Poder();
    
    void setCapacidadDestructiva(float _capacidadDestructiva);
    
    virtual float getCapacidadDestructiva();
    void setAfectaA(std::string _afectaA);
    std::string getAfectaA() const;
    void setDescripcion(std::string _descripcion);
    std::string getDescripcion() const;
    void setNombre(std::string _nombre);
    std::string getNombre() const;
    
    void operator =(const Poder& otro);
    virtual std::string toCSV();
   
protected:
    std::string _nombre="";
    std::string _descripcion="";
    std::string _afectaA="";
    float _capacidadDestructiva=0;
};

#endif /* PODER_H */

