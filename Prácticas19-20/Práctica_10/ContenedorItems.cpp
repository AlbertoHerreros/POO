
/* 
 * File:   ContenedorItems.cpp
 * Author: Alberto Limas
 * 
 * Created on 24 de junio de 2020, 15:52
 */

#include "ContenedorItems.h"

#include <stdexcept>

ContenedorItems::ContenedorItems (): ContenedorItems(27) {
    
}
ContenedorItems::ContenedorItems(int cuantosCaben)
    :_maxItems(cuantosCaben)
    ,_numItems(0) {
    
    _items=new Item*[cuantosCaben];
    for (int i = 0; i < cuantosCaben; i++) {
        _items[i]=nullptr;
    }
}

/**Crea un Cofre vacío del mismo tamaño del original*/
ContenedorItems::ContenedorItems(const ContenedorItems& orig) 
    :_maxItems(orig._maxItems)
    ,_numItems(orig._numItems) {

    _items=new Item*[_maxItems];
    for (int i = 0; i < _maxItems; i++) {
        _items[i]=nullptr;
    }
}

ContenedorItems::~ContenedorItems() {
    delete [] _items;
}

int ContenedorItems::cuantosHay() const {
    return _numItems;
}

int ContenedorItems::cuantosCaben() {
    return _maxItems;
}

void ContenedorItems::mete(Item* item) {
    
    if( item == nullptr){
        throw std::invalid_argument ("Puntero nullptr");
    }
    
    if (_numItems==_maxItems)
        throw std::out_of_range("[Cofre::mete] No caben más elementos en el cofre");
    _items[_numItems++]=item;
}

/**@param cual nº orden del elemento a consultar
 * @return Referencia al objeto indicado del cofre
   @throw std::out_of_range si el elemento no existe*/
Item& ContenedorItems::consulta(int cual) {
    
    if(_numItems == 0){
        throw EmptyContainer ("Cofre vacío");
    }
    
    if (cual<=0 || cual >_numItems)
        throw std::out_of_range("[Cofre::consulta] El elemento indicado no existe");
    return *_items[cual-1];
}


/**@param cual nº orden del elemento a extraer
 * @return Extrae del cofre y devuelve el puntero al Item indicado
   @throw std::out_of_range si el elemento no exist*/
Item* ContenedorItems::saca(int cual) {
    
    if(_numItems == 0)
        throw EmptyContainer ("Cofre vacío");
    
    
    if (cual<=0 || cual >_numItems)
        throw std::out_of_range("[Cofre::mete] El elemento indicado no existe");
    Item* elemento = _items[cual-1];
    _numItems--;
    if (_numItems>0)
        _items[cual-1]=_items[_numItems];
    return elemento;
}

