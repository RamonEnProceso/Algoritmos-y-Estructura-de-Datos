#ifndef ORDENAR_KDA_H
#define ORDENAR_KDA_H

#include "Jugador.h"
#include "calcularKDA.h"

void ordenarPorKDA (Jugador lista[], int tam){

    bool esOrdenado = false;

    while (!esOrdenado)
    {
        esOrdenado = true;

        for (int i = 0; i < tam-1; i++)
        {
            if ( calcularKDA(lista[i]) < calcularKDA(lista[i+1]) )
            {
                Jugador menor = lista[i];
                esOrdenado = false;
                lista[i] = lista[i+1];
                lista[i+1] = menor;
            }
            
        }
        
    }
    
};
#endif