#include <iostream>
#include <sstream>
#include <string>

#include "../includes/Evento.h"

using namespace std;

string Evento::getDate(){return date;}

int Evento::getNumero(){return id;}

void Evento::ejecutar(string reloj){ //imprime lo que se pide
    printf("%s %s->Evento %i\n",date.c_str(),reloj.c_str(),id);
}