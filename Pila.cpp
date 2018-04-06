#include "Pila.h"
#include "Apuntador.h"
#include <string> 
#include <iostream>

#include <sstream>
using namespace std;



/*Pila::Pila(Apuntador* apuntador){
    this-> apuntador = apuntador;
}*/


Pila::Pila(){
    apuntador = NULL;
}


void Pila:: push(string cadena){
    Apuntador* apuntadorAnterior = NULL;
    for(int i=0; i<cadena.size(); i++ ){
        //cout<< cadena.at(i) << endl;
       
        stringstream  simbolo ;
        simbolo << ""<<cadena.at(i);
        string cad = simbolo.str();

        Apuntador* nuevo = new Apuntador(apuntadorAnterior, cad);

        
        this->apuntador = nuevo;
        cout<< apuntador->getSimbolo() <<" ";
        
        

        apuntadorAnterior = NULL;
        
        apuntadorAnterior = nuevo;
        //cout << apuntadorAnterior->getSimbolo() <<" ";
    }
    cout<< endl;
   ///
    

}

string Pila:: pop(){
    Apuntador* actual = NULL;
    actual = apuntador;

    

    Apuntador* nuevo = NULL;
    nuevo = apuntador->getAnterior();
    apuntador = NULL;
    apuntador = nuevo;

    return actual->getSimbolo();

}

void Pila:: top(){
    Apuntador* nuevo = NULL;
    nuevo = apuntador->getAnterior();

    int condicion = 0;
    while(condicion == 0){
        Apuntador* actual = NULL;
        actual = nuevo;
        
        Apuntador* otro = NULL;
        nuevo = otro;
        nuevo = actual->getAnterior();
        

        if(nuevo == NULL){
            nuevo = actual;
            //cout<< "elemento es: "<< nuevo->getSimbolo() << endl;
            condicion =2;
        }
    }

    cout<< "Primer elemento es: "<< nuevo->getSimbolo() << endl;
    
}

void Pila:: isEmpty(){

}


Pila::~Pila(){
}