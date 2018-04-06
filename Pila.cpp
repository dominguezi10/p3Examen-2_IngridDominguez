#include "Pila.h"
#include "Apuntador.h"
#include <string> 
#include <iostream>
using namespace std;

Pila::Pila(){
}

Pila::Pila(Apuntador* apuntador){
    this-> apuntador = apuntador;
}

void Pila:: push(Apuntador* apuntadorB){
   //apuntadorB = this->apuntador;
    this->apuntador = apuntadorB;
    cout<< apuntador->getSimbolo() <<" ";

}

string Pila:: pop(){
    return apuntador->getSimbolo();
}

void Pila:: top(){

}

void Pila:: isEmpty(){

}


Pila::~Pila(){
}