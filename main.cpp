#include <iostream>
#include <string>
#include "Pila.h"
#include "Apuntador.h"
#include <sstream>
using namespace std;

//Prototipos
//int menu();
void agregarAPila(string);
Pila* pila;

int main(){
    
    string cadena;
    cout<< "Bienvenido! Al examen Final (Yeaaaaaah!)" << endl;
    cout<< "Ingrese su cadena de operaciones: " << endl;
    cin >> cadena;
    agregarAPila( cadena);
    // como se esta empezado el anterior es null
    
    





}// fn del main

void agregarAPila(string cadena){
    Apuntador* apuntadorAnterior = NULL;
    for(int i=0; i<cadena.size(); i++ ){
        //cout<< cadena.at(i) << endl;
       
        stringstream  simbolo ;
        simbolo << ""<<cadena.at(i);
        string cad = simbolo.str();

        Apuntador* apuntador = new Apuntador(apuntadorAnterior, cad);

        if(i == 0){
            pila = new Pila(apuntador);   
        }
        pila->push(apuntador);


        

        apuntadorAnterior = NULL;
        
        apuntadorAnterior = apuntador;
        //cout << apuntadorAnterior->getSimbolo() <<" ";
    }
    cout<< endl;

}



//int menu();