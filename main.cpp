#include <iostream>
#include <string>
#include "Pila.h"
#include "Apuntador.h"
#include <sstream>
#include <stdlib.h> 

using namespace std;

//Prototipos
Pila* pila = new Pila();

int resultado(string);


int main(){
    
    string cadena;
    char opcion = 's';
    while(opcion == 's'){
    
        cout<< "Bienvenido! Al examen Final (Yeaaaaaah!)" << endl;
        cout<< "Ingrese su cadena de operaciones: " << endl;
        cin >> cadena;
        pila->push(cadena);
        // como se esta empezado el anterior es null
        cout << "Agregado a la pila"<<endl;
        cout << "Resultado: "<<   resultado(cadena)<<endl;

        Apuntador* elemento = NULL;
        elemento = pila->pop();
        cout<< "El ultimo elemento es:" << endl;    
        cout<< "->  " << elemento->getSimbolo() << endl;

        cout<< "Este elemento fue eliminado!" << endl;    
        /*cout<< "->  " << pila->pop() << endl;*/

        elemento = NULL;
        elemento = pila->top();
        if(elemento != NULL){
            cout<< "El primer elemento es:" << endl;    
            cout<< "->  " << elemento->getSimbolo() << endl;
        }
    

        bool condicion;
        condicion = pila->isEmpty();
        if(condicion == true){
            cout<< "No hay elementos en la pila!" << endl;  
        }else{
            cout<< "Hay elementos en la pila!" << endl;
        }

        

        cout << endl << endl;
        cout << "Desea continuar? [s/n]: ";
        cin>> opcion;
        cout << endl << endl;
    }// fin del while

    cout<< "No sos Playa XD" << endl;
}// fn del main



int resultado(string cadena){
    int resultado = 0;
    int opcion = 0;
    int numero = 0;

    int Elemento1 = 0;
    for(int i=0; i<cadena.size(); i++){
        int elemento = cadena.at(i);
        
        
        stringstream  simbolo ;
        simbolo << ""<<cadena.at(i);
        string cad = simbolo.str();

        if(cadena.at(i) == '+' ){
            opcion = 1;
        }
        if(cadena.at(i) == '-' ){
            opcion = 2;
        }
        
        if(cadena.at(i) == '*' ){
            opcion = 3;
        }

        if(cadena.at(i) == '/' ){
            opcion = 4;
        }

        
        /*if(numero>0 ){
            cout<< resultado<<" "<< opcion<< " "<< numero<<endl;
            if(opcion ==1){
                resultado = resultado + numero;
            } else if(opcion ==2){
                resultado = resultado - numero;
            }else if(opcion ==3){
                resultado = resultado * numero;
            }else if(opcion ==4){
                resultado = resultado / numero;
            }
            numero =0;
            cout<< resultado <<endl;
        }*/

        if(elemento>=48 && elemento<=57 ){
            numero =   atoi(cad.c_str());
            

            if(Elemento1 == 0){
                resultado = numero;
                numero = 0;
                Elemento1 = 3;
            }

            if(resultado >0 && opcion>0){
                //cout<< resultado<<" "<< opcion<< " "<< numero<<endl;
                if(opcion ==1){
                    cout<< resultado<<" + "<< numero<<endl;
                    resultado = resultado + numero;
                } else if(opcion ==2){
                    cout<< resultado<<" - "<< numero<<endl;
                    resultado = resultado - numero;
                }else if(opcion ==3){
                    cout<< resultado<<" * "<< numero<<endl;
                    resultado = resultado * numero;
                }else if(opcion ==4){
                    cout<< resultado<<" / "<< numero<<endl;
                    resultado = resultado / numero;
                }
                numero =0;
                cout<< resultado <<endl;
            }
            
        }

        

    }

    cout << endl<< endl;
    return resultado;
}

//int menu();

//vector con identifcadores