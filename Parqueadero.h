/* Autores: Hecho por: Juan David Roa Valencia y Jhonatan David Vanegas Arrieta
 * Fecha de creación: 22/09/14
 * Versión: 2.0
 * 
 * Nombre del archivo: Parqueadero.cpp
 * Responsabilidad: 
 * Colaboración: 

 */

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#ifndef PARQUEADERO_H
#define	PARQUEADERO_H

class Parqueadero {
public:
    Parqueadero();
    ~Parqueadero();
    void entrarCarro();
    void sacarCarro();
    void desplegarCupo();
    char menu();
    string sobreCupo();
    string getSobreCupo();
    
private:
    
    int cuposDisponibles;
    int carros;
    int cupos;
};

#endif	/* PARQUEADERO_H */

