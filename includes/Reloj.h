//
// Created by alejo on 28/5/2020.
//

#ifndef INC_2DO_PARCIAL_RELOJ_H
#define INC_2DO_PARCIAL_RELOJ_H

#include "Evento.h"

using namespace std;

class Reloj{
    string nombre;
    int seconds;//hora random que elegimos para la ejecucion
    int repeticion;// puede ser el numero que indique el periodo de repeticion o el maximo en el caso de un reloj random
    bool aleatorio;//true si es aleatorio
    list<Evento> lista;
public:
    Reloj(string nombre, int repeticion, bool aleatorio){
        this->nombre=nombre;
        this->seconds= 57336;//corresponde a las 15:55:36
        this->repeticion = repeticion;
        this->aleatorio=aleatorio;
    };
    void genEventoPeriodico(); //genera eventos periodicamente
    void genEventosRandom();//genera eventos de forma random
    int getSeconds(){return seconds;};
    bool getTipo(){return aleatorio;};

private:
    string getDate(int seg);
    Evento genEvento(int id, int seg); //genera un evento y les pone id
};


#endif //INC_2DO_PARCIAL_RELOJ_H
