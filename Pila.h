#ifndef PILA_H
#define PILA_H
#include "Pila.h"
#include "Apuntador.h"
#include <string> 

using namespace std;

class Pila{
    private:
    Apuntador* apuntador;
        
    public:
    Pila();
    //Pila(Apuntador*);

    void push(string);
    Apuntador* pop();
    Apuntador* top();
    bool isEmpty();
    
    
    ~Pila();


};
#endif