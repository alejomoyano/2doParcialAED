#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <fstream>
#include <list>

#include "../includes/Planificador.h"
#include "../includes/Reloj.h"
#include "../includes/Evento.h"

using namespace std;

void Planificador::lector() {
    string myText;

    ifstream MyReadFile("Relojes.txt");//busca el archivo

    while (getline(MyReadFile, myText)){
        myText.erase(0,2);// le quita el numero y el espacio que sigue
        bool per;

        if(myText.find("periodico")<15 && myText.find("periodico")>0){per=true;}; //determina si es periodico
        int pos=0;

        for(int i=0,size = myText.length();i<size;i++){ //busca el blank mas cercano para extraer el nombre
            if(myText.at(i)==' '){
                pos = i;
                break;
            }
        }

        string nombre = myText.substr(0,pos);//extrae el nombre
        myText.erase(0,pos+11);//elimina el nombre y el tipo del string
        int retardo = atoi(myText.c_str());//pasa de string a int

        agregarReloj(per, nombre, retardo);//agrega el reloj a la lista

    }
}

void Planificador::agregarReloj(bool per,string nombre,int retardo) {
    if(per){  //lo guarda como periodico si lo es
        Reloj r(nombre,retardo,!per);
        relojes.push_back(r);
    }
    else{//lo guarda como aleatorio
        Reloj r(nombre,retardo,per);
        relojes.push_back(r);
    }
}