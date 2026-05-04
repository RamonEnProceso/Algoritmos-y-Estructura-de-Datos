#ifndef INPUT_CONTROLADOR_HPP
#define INPUT_CONTROLADOR_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Jugador.hpp"

using namespace std

class inputControlador{

private:

int cantidadJugadores = 0;
vector<Jugador> Jugadores = {};

public:

void pedirEntero (string pedido, int &entero){

cout << "\nIngrese la cantidad de "<< pedido<< ": ";

cin >> entero;

}

void imprimirInicio(){

cout << "\n==============================\nCalculadora de KDA\n=============================="<<endl;
cout <<"\n\nIngrese la cantidad de jugadores: "<<endl;
cin >> cantidadJugadores; cantidadJugadores = cantidadJugadores - '0';
cout << "\n\n Usted quiere calcular el KDA de "<< cantidadJugadores<< "jugadores.\n" <<endl;

for (int i = 0 ; i<cantidadJugadores; i++){

Jugador jugador;
str nombre;
int asesinatos;
int muertes;
int asistencias;


cout << "\n\nEl nombre jugador nro "<< i+1 << " es" << endl;

pedirEntero("asesinatos", asesinatos);
pedirEntero("muertes", muertes);
pedirEntero("asistencias", asistencias);

jugador.asignarDatos(nombre, asesinatos, muerte,asistencias);

}

}

vector<Jugador> devolverJugadores{
return Jugadores;
}

}




#endif
