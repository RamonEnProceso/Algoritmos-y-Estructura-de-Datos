#ifndef CALCULAR_KDA_H
#define CALCULAR_KDA_H

#include "Jugador.h"
#pragma once

float calcularKDA(Jugador &j) {

    if (j.muertes==0)
    {
        return j.asesinatos+j.asistencias;
    }
    
    float kda = (float)(j.asesinatos+j.asistencias)/j.muertes;


    return kda;

}
#endif