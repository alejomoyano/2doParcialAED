#ifndef INC_2DO_PARCIAL_PLANIFICADORLISTA_H
#define INC_2DO_PARCIAL_PLANIFICADORLISTA_H

#include "Planificador.h"
#include "Reloj.h"

using namespace std;

class PlanificadorLista: public Planificador{
    list<Evento> eventos;
public:
    PlanificadorLista():Planificador(){};
    void agregarReloj(Reloj reloj);
    void quickSort();
};



#endif //INC_2DO_PARCIAL_PLANIFICADORLISTA_H
