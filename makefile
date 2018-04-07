main: main.o Apuntador.o Pila.o
	g++ main.o Apuntador.o Pila.o -o main

main.o: main.cpp Apuntador.h Pila.h
	g++ -c main.cpp

Apuntador.o: Apuntador.cpp Apuntador.h
	g++ -c Apuntador.cpp

Pila.o: Pila.cpp Pila.h Apuntador.h
	g++ -c Pila.cpp
