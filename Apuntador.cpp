#include "Apuntador.h"
#include <string> 
#include <iostream>
using namespace std;

Apuntador::Apuntador(Apuntador* apuntadorAnterior, string simbolo){
    this->anterior = apuntadorAnterior;
    this->simbolo = simbolo;
    //cout<<"n "<< endl; si entra
}

Apuntador::~Apuntador(){
}

void Apuntador:: setApuntador(Apuntador* apuntadorAnterior){
    this->anterior = apuntadorAnterior;
}

string Apuntador:: getSimbolo(){
    return simbolo;
}