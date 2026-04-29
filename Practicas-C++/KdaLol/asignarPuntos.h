#ifndef ASIGNAR_PUNTOS_H
#define ASIGNAR_PUNTOS_H

#include "Jugador.h"
#include <iostream>

void asignarPuntos(Jugador &p, std::string nombre, int asesinatos, int muertes, int asistencias){

    p.nombre = nombre;
    p.asesinatos = asesinatos;
    p.muertes = muertes;
    p.asistencias = asistencias;

}

#endif