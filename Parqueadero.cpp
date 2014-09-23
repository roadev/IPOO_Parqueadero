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
    char respuestaMenu;
    
    do{
        cout<<"Ingrese la opción 1 para: Entrar carro. \n Opción 2 para: Sacar carro. \n Opcion 3 para: "
                "Desplegar cupo"<<endl;
        char respuestaEntrarCarro, respuestaSacarCarro;
        
        int opcion;
        cin>>opcion;
        switch(opcion){
            case 1: cout<<"Ha ingresado un vehículo al parqueadero"<<endl;
            carros ++;
            cuposDisponibles --;
            break;
            case 2: cout<<"Ha retirado un vehículo del parqueadero"<<endl;
            carros --;
            cuposDisponibles ++;
            break;
            case 3: cout<<"El número de carros en el parqueadero es de: "<<endl;
            return carros;
            break;
            default: cout<<"Opción no válida"<<endl;
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
        cout<<"¿Desea continuar? \n Para Sí Escriba: s , para No Escriba: n"<<endl;
        cin>>respuestaMenu;
        
    }
    while ((respuestaMenu == 's') || (respuestaMenu == 'S'));
        
    return 0;
}

