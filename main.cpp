#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>
#include <string>
#include <unistd.h>
#include <stdlib.h>
#include <fstream>
#include <list>

using namespace std;

/*-------------Evento------------*/

class Evento{
    string date; //guarda al fecha en la que fue ejecutado
    int id; //id del evento
public:
    Evento(string date,int id){
        this->date = date;
        this->id = id;
    };
    string getDate();
    int getNumero();
    void ejecutar(string reloj);
};

string Evento::getDate(){return date;}

int Evento::getNumero(){return id;}

void Evento::ejecutar(string reloj){ //imprime lo que se pide
    printf("%s %s->Evento %i\n",date.c_str(),reloj.c_str(),id);
}

/*-------------Reloj------------*/

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
/*-------------Planificador------------*/

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

/* TODO->LOS PLANIFICADORES QUE GUARDEN Y ORDENEN LOS EVENTOS*/

int main(){


}