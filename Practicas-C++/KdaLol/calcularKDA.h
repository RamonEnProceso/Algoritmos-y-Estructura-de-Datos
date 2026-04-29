#include "Jugador.h"

float calcularKDA(Jugador &j) {

    if (j.muertes==0)
    {
        return j.asesinatos+j.asistencias;
    }
    
    float kda = (float)(j.asesinatos+j.asistencias)/j.muertes;


    return kda;

}
