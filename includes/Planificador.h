//
// Created by alejo on 28/5/2020.
//

#ifndef INC_2DO_PARCIAL_PLANIFICADOR_H
#define INC_2DO_PARCIAL_PLANIFICADOR_H

#include <list>

#include "Reloj.h"
#include "Evento.h"

using namespace std;

class Planificador{ //TODO
public:
    Planificador()=default; //TODO
protected:
    virtual void agregarReloj(bool per,string nombre,int retardo)=0;//agrega el reloj a la lista
    Evento getProximoEvento(); //TODO
    void run(); //TODO
};


#endif //INC_2DO_PARCIAL_PLANIFICADOR_H
