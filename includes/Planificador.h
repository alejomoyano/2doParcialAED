//
// Created by alejo on 28/5/2020.
//

#ifndef INC_2DO_PARCIAL_PLANIFICADOR_H
#define INC_2DO_PARCIAL_PLANIFICADOR_H

#include "Reloj.h"
#include "Evento.h"

using namespace std;

class Planificador{ //TODO
    list<Reloj> relojes;
public:
    Planificador(){ //TODO

    }

    void lector();//lee el archivo y obtiene lo necesario para instanciar los relojes
    void agregarReloj(bool per,string nombre,int retardo);//agrega el reloj a la lista
//    Evento getProximoEvento(): //TODO
//    void run(); //TODO
};


#endif //INC_2DO_PARCIAL_PLANIFICADOR_H
