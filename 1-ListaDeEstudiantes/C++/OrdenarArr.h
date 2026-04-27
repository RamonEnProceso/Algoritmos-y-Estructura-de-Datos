#include "PersonaStruct.h"
#include "EncontrarMayorMenor.h"

void ordenarMayoraMenor(Persona arr[], int tam){

    bool EsOrdenado = false;

    //Ordenamos 
    while(!EsOrdenado){
        EsOrdenado = true;
        for (int e = 0; e < tam-1; e++){
            encontrarMayor(arr[e],arr[e+1],EsOrdenado);
        }
    }

}
