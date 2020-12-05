/*
ITESM Querétaro
Programación Orientada a Objetos
Proyecto Final PCOO
Cristian Leilael Rico Espinosa A01707023
04/12/2020
*/

#ifndef TELCEL_H
#define TELCEL_H

#include "creProveedor.h"

class Telcel:public Proveedor{

public:
    Telcel(){};
    Telcel(string com, string cos, string dur, string meg):Proveedor(com, cos, dur, meg){
    }

};

#endif
