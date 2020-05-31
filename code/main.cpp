#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>

#include "../includes/Evento.h"
#include "../includes/Reloj.h"
#include "../includes/Planificador.h"
#include "../includes/PlanificadorLista.h"
#include "../includes/Lista.h"

using namespace std;

int main(){

//    string myText;
//
//    ifstream MyReadFile("Relojes.txt");//busca el archivo
//
//    while (getline(MyReadFile, myText)){
//        myText.erase(0,2);// le quita el numero y el espacio que sigue
//        bool per;
//
//        if(myText.find("periodico")<15 && myText.find("periodico")>0){per=true;}; //determina si es periodico
//        int pos=0;
//
//        for(int i=0,size = myText.length();i<size;i++){ //busca el blank mas cercano para extraer el nombre
//            if(myText.at(i)==' '){
//                pos = i;
//                break;
//            }
//        }
//
//        string nombre = myText.substr(0,pos);//extrae el nombre
//        myText.erase(0,pos+11);//elimina el nombre y el tipo del string
//        int retardo = atoi(myText.c_str());//pasa de string a int
//
//        agregarReloj(per, nombre, retardo);//agrega el reloj a la lista
//
//    }

list<int> lista;


lista.push_front(5);
lista.push_front(4);
lista.push_front(8);
lista.push_front(9);

for(auto it = lista.end(); it!=lista.begin();it--){
    cout<<*it<<endl;
}

}