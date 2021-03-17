/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EmptyContainer.h
 * Author: Alberto Limas
 *
 * Created on 24 de junio de 2020, 13:08
 */

#ifndef EMPTYCONTAINER_H
#define EMPTYCONTAINER_H

#include <stdexcept>

class EmptyContainer: public std::domain_error {
public:
    EmptyContainer( std::string descripcion);
    EmptyContainer( const EmptyContainer& orig);
    virtual ~EmptyContainer() noexcept;
private:
    std::string _descripcion;
};

#endif /* EMPTYCONTAINER_H */

