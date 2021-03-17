/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ContenedorItems.h
 * Author: Alberto Limas
 *
 * Created on 24 de junio de 2020, 15:52
 */

#ifndef CONTENEDORITEMS_H
#define CONTENEDORITEMS_H

#include "Item.h"
#include <string>
#include <stdexcept>
#include "EmptyContainer.h"

class ContenedorItems {
public:
    ContenedorItems();
    ContenedorItems(int cuantosCaben);
    ContenedorItems(const ContenedorItems& orig);
    virtual ~ContenedorItems();
    int cuantosCaben();
    int cuantosHay() const;
    virtual void mete(Item *item);
    Item& consulta(int cual);
    Item* saca(int cual);
protected:
    int _maxItems = 27; ///< Tamaño del vector de punteros
    Item* *_items = nullptr; ///< Vector de punteros creado dinámicamente
    int _numItems = 0; ///< Primeras posiciones del vector ocupadas (máximo maxItems)
};

#endif /* CONTENEDORITEMS_H */

