/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fecha.h
 * Author: Alberto Limas
 *
 * Created on 21 de junio de 2020, 21:39
 */

#ifndef FECHA_H
#define FECHA_H

class Fecha {
public:
    Fecha()=default;
    Fecha(int dia, int mes, int year);
    Fecha(const Fecha& orig);
    virtual ~Fecha();
    
    void SetYear(int _year);
    int GetYear() const;
    void SetMes(int _mes);
    int GetMes() const;
    void SetDia(int _dia);
    int GetDia() const;
private:
    int _dia=0;
    int _mes=0;
    int _year=0;
};

#endif /* FECHA_H */

