#include <iostream>
#include <sstream>
#include <string>
#include <list>

#include "../includes/Reloj.h"
#include "../includes/Evento.h"

using namespace std;

string Reloj::getDate(int seg){//genera el date y lo devuelve
    std::string str;
    if(seg>=60){
        int minutos = seg / 60;//calcula los minutos
        int segundos = seg % 60;//los segundos que restan del calculo de minutos
        int horas = minutos / 60;//calcula las horas
        minutos %= 60;//los minutos que resstan del calculo de la hora
        str = "04/05/2020 "+std::to_string(horas)+":"+std::to_string(minutos)+":"+std::to_string(segundos);// genera un string con el date
        return str;
    }
};

Evento Reloj::genEvento(int id,  int seg) {
    Evento e(getDate(seg),id);//instancia un evento y le pasa el date ya calculado y su id
    return  e;
};

void Reloj::genEventoPeriodico() {
    int id = 0;
    int seg=seconds;
    while (true) {
        seg+=repeticion; //aumenta la hora en funcion de el campo repeticion
        Evento e = genEvento(id,seg);//genera un evento
        lista.push_back(e);//los mete en la lista
        id++;
        if (id == 50) { break; }
    }
}

void Reloj::genEventosRandom(){
    int id = 0;
    int seg=seconds;
    while (true) {
        int ran = rand() % repeticion + 1; // genera numeros random desde 1 a repeticion(maximo)
        seg+=ran; //aumenta la hora en funcion de el campo repeticion
        Evento e = genEvento(id,seg);//genera un evento
        lista.push_back(e);//los mete en la lista
        id++;
        if (id == 50) { break; }
    }
}