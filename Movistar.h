/*
ITESM Querétaro
Programación Orientada a Objetos
Proyecto Final PCOO
Cristian Leilael Rico Espinosa A01707023
04/12/2020
*/

#ifndef MOVISTAR_H
#define MOVISTAR_H

#include "creProveedor.h"


class Movistar:public Proveedor{

public:
    Movistar(){};
    Movistar(string com, string cos, string dur, string meg):Proveedor(com, cos, dur, meg){

    }

};

#endif
