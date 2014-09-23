/* Autores: Hecho por: Juan David Roa Valencia y Jhonatan David Vanegas Arrieta
 * Fecha de creación: 22/09/14
 * Versión: 1.0
 * 
 * Nombre del archivo: Parqueadero.cpp
 * Responsabilidad: 
 * Colaboración: 

 */

#include "Parqueadero.h"

Parqueadero::Parqueadero() {
    cuposDisponibles = 20;
    
}

Parqueadero::~Parqueadero() {
}

char Parqueadero::menu(){
    cout<<"Bienvenido al parqueadero"<<endl;
    
    do{
        cout<<"Ingrese la opción 1 para: Entrar carro. \n Opción 2 para: Sacar carro. \n Opcion 3 para: "
                "Desplegar cupo"<<endl;
        char respuestaEntrarCarro, respuestaMenu, respuestaSacarCarro;
        
        int opcion;
        cin>>opcion;
        switch(opcion){
            case 1: cout<<"Ha ingresado un vehículo al parqueadero"<<endl;
            carros ++;
            break;
            case 2: cout<<"Ha retirado un vehículo del parqueadero"<<endl;
            carros --;
            break;
            case 3: cout<<"El número de carros en el parqueadero es de: "<<endl;
            return carros;
            break;
        }
        do{
            /*if((respuestaEntrarCarro >20)||(respuestaEntrarCarro <=0)){
                cout<<"Ingrese un número mayor que cero y menor o igual a 20"<<endl;
            }*/
            cuposDisponibles--;
        }
        while((respuestaEntrarCarro >20)||(respuestaEntrarCarro <=0));
        if(cuposDisponibles = 0){
            cout<<"No hay más cupos disponibles, debe desplegar cupos."<<endl;
        }
    }
    while ((cuposDisponibles <= 20)&& (cuposDisponibles >0));

    
    
}

