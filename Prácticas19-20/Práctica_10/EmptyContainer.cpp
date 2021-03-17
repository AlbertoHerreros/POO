
/* 
 * File:   EmptyContainer.cpp
 * Author: Alberto Limas
 * 
 * Created on 24 de junio de 2020, 13:08
 */

#include "EmptyContainer.h"

EmptyContainer::EmptyContainer(std::string descripcion):
std::domain_error(descripcion){
}

EmptyContainer::EmptyContainer( const EmptyContainer& orig):
std::domain_error(orig){
    
}

EmptyContainer::~EmptyContainer() noexcept {
}

