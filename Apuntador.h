#ifndef APUNTADOR_H
#define APUNTADOR_H
#include "Apuntador.h"

class Apuntador;
#include <string> 
#include <iostream>
using namespace std;

class Apuntador{
    private:
        Apuntador* anterior;
        string simbolo;
        
    public:
    string getSimbolo();
    void setApuntador(Apuntador*);

    Apuntador* getAnterior();

    //Apuntador(string);
    Apuntador(Apuntador*, string);
    ~Apuntador();

    


};
#endif