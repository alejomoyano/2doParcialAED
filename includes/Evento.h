//
// Created by alejo on 28/5/2020.
//

#ifndef INC_2DO_PARCIAL_EVENTO_H
#define INC_2DO_PARCIAL_EVENTO_H

#include <string>

using namespace std;

class Evento{
    int date; //guarda al fecha en la que fue ejecutado
    int id; //id del evento
public:
    Evento();
    Evento(int date,int id){
        this->date = date;
        this->id = id;
    };
//    string getDate();
    int getNumero();
//    void ejecutar(string reloj);
};


#endif //INC_2DO_PARCIAL_EVENTO_H
