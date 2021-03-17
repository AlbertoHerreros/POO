/* 
 * File:   ordena.h
 * Author: Alberto Limas
 *
 * Created on 24 de junio de 2020, 11:27
 */

#ifndef ORDENA_H
#define ORDENA_H

template<typename T>
void ordena(T* vector[], int tamv){
   int posMenor; 
    for( int i=0;i<tamv-1;i++ ){
        posMenor=i;
        for( int j=0;j<tamv;j++ ){
            
            if( vector[j]& < vector[posMenor]&)
                posMenor=j;
        }
        intercambia(vector[i],vector[posMenor]);
    }
    
}

template<typename T>
void intercambia(T &a, T& b){
    T c=a;
    a=b;
    b=c;
}


#endif /* ORDENA_H */

