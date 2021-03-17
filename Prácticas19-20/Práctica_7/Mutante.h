/**
 * @file Mutante.h
 * @author algarcia
 *
 * @date 6 de abril de 2016, 19:52
 */

#ifndef MUTANTE_H
#define MUTANTE_H

#include <string>
#include "Poder.h"
#include "PoderFisico.h"
#include "PoderPsiquico.h"

using std::string;

/**
 * @brief Clase Muntante
 */
class Mutante {
public:
    static const int MAX_PODERES = 10; ///< Max. moderes de un mutante

public:
    Mutante() = default;
    Mutante(string nombre, string apodo, int fechaN,string nacionalidad);
    Mutante(const Mutante& orig);
    virtual ~Mutante();
    
    void setNombreReal(string nombreReal);
    string getNombreReal() const;
    void setNacionalidad(string nacionalidad);
    string getNacionalidad() const;
    void setFechaDeNacimiento(int fechaDeNacimiento);
    int getFechaDeNacimiento() const;
    void setApodo(string apodo);
    string getApodo() const;

    string toCSV() const;

    Mutante& operator=(const Mutante& orig);
    
    void addPoder( string nombre, string descripcion, string afectaA, float capacidadD );
    void addPoderFisico( string nombre, string descripcion, string afectaA, float capacidadD );
    void addPoderPsiquico( string nombre, string descripcion, string afectaA, float capacidadD );
    
    void addPoder( const Poder& poder);
    void addPoder( const PoderFisico& poder);
    void addPoder( const PoderPsiquico& poder);
    
    void borraPoder( int cual );
    
    float capacidadDestructivaTotal();
    
    
    int getNPoderes() const;
    
    string poderCSV();

protected:
    string _nombreReal = "---";
    string _apodo = "---";
    int _fechaDeNacimiento = 0;
    string _nacionalidad = "---";
    Poder* _poder[10];
    int _nPoderes=0;
};

#endif /* MUTANTE_H */

