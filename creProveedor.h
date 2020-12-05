/*
ITESM Querétaro
Programación Orientada a Objetos
Proyecto Final PCOO
Cristian Leilael Rico Espinosa A01707023
04/12/2020
*/

#ifndef PROVEEDOR_H // Estas funciones se encargan de definir a estas clases para evitar que, en caso de ser llamadas varias veces, el compilador y el programa no genere confusiones.
#define PROVEEDOR_H

#include<iostream>
#include<sstream>
using namespace std;

class Proveedor{

private:

    string compania;
    string costo;
    string duracion;
    string megas;

public:

    //Constructores
    Proveedor(){}; // Por Default
    Proveedor(string com, string cos, string dur, string meg){ // Con una estructura específica.
        compania = com;
        costo = cos;
        duracion = dur;
        megas = meg;

    }
    string to_string(){
    stringstream aux;
    aux<< compania <<", "<<costo<<", "<<duracion<<", "<<megas; // Esta función se encarga de llamar a los elementos privados de la clase proveedor y de convertirlos a strings.
    return aux.str();
    }

// Getters

string get_compania(){
return compania;
}

string get_costo(){
return costo;
}

string get_duracion(){
return duracion;
}

string get_megas(){
return megas;
}

// Setters

void set_compania(string com){
compania = com;
}

void set_costo(string cos){
costo = cos;
}

void set_duracion(string dur){
duracion = dur;
}

void set_megas(string meg){
megas = meg;
}

};

#endif
