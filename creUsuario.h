/*
ITESM Querétaro
Programación Orientada a Objetos
Proyecto Final PCOO
Cristian Leilael Rico Espinosa A01707023
04/12/2020
*/

#ifndef USUARIO_H
#define USUARIO_H

#include<iostream>
#include<sstream>
#include "Telcel.h"
#include "Movistar.h"

using namespace std;

/*
La Clase Usuario servirá como la clase "final", será la única que sea llamada en el Main debido a las relaciones
de herencia y composición que ya existen en las demás y en esta misma.
*/

class Usuario{

private:

    Telcel tel[3]; // Por medio de composición, se integran arrays que contienen el tipo de datos contenidos en las clases Telcel y Movistar respectivamente.
    Movistar mov[3]; // En este caso, los limité a 3 porque elegí solamente 3 paquetes con los que trabajar.
    string nombre;
    string apellido;
    int proveedor;
    int paquete;
    int pago;
    int numero;

public:

    //Constructor por Default
    Usuario(){};

    string get_nombre();
    string get_apellido();
    int get_proveedor();
    int get_paquete();
    int get_pago();
    int get_numero();

    void set_nombre(string);
    void set_apellido(string);
    void set_proveedor(int);
    void set_paquete(int);
    void set_pago(int);
    void set_numero(int);

    /* Se crean las funciones adecuadas para recibir y mostrar los datos de los paquetes,
    prácticamente, siguen la misma estructura de los getters y setters*/

    void agregaPaqueteT(string, string, string, string, int);
    void agregaPaqueteM(string, string, string, string, int);

    string mostrarPaqueteT();
    string mostrarPaqueteM();

};

// Getters

string Usuario::get_nombre(){
return nombre;
}

string Usuario::get_apellido(){
return apellido;
}

int Usuario::get_proveedor(){
return proveedor;
}

int Usuario::get_paquete(){
return paquete;
}

int Usuario::get_pago(){
return pago;
}

int Usuario::get_numero(){
return numero;
}

// Setters

void Usuario::set_nombre(string n){
nombre = n;
}

void Usuario::set_apellido(string ape){
apellido = ape;
}

void Usuario::set_proveedor(int pr){
proveedor = pr;
}

void Usuario::set_pago(int p){
pago = p;
}

void Usuario::set_paquete(int pq){
paquete = pq;
}

void Usuario::set_numero(int nu){
numero = nu;
}

// Funciones de la composición.

void Usuario::agregaPaqueteT(string compania, string costo, string duracion, string megas, int pos){
tel[pos]=Telcel(compania, costo, duracion, megas); // Se crean arrays, cada conjunto de datos pertenece a un espacio de los 3 especificados.
}

void Usuario::agregaPaqueteM(string compania, string costo, string duracion, string megas, int pos1){
mov[pos1]=Movistar(compania, costo, duracion, megas);
}

string Usuario::mostrarPaqueteT(){
    stringstream aux;
    for(int i=0; i<3; i++){
        aux<<tel[i].to_string()<<endl; // Estructuras similares y funciones heredadas de la clase creProovedor.
    }
    return aux.str();
}

string Usuario::mostrarPaqueteM(){
    stringstream aux;
    for(int j=0; j<3; j++){
        aux<<mov[j].to_string()<<endl;
    }
    return aux.str();
}


#endif
