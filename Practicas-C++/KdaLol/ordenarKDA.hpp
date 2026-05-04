#ifndef ORDENAR_KDA_H
#define ORDENAR_KDA_H

#include "Jugador.hpp"
#include <vector>

void ordenarPorKDA (std::vector<Jugador> &lista, int tam){

    bool esOrdenado = false;

    while (!esOrdenado)
    {
        esOrdenado = true;

        for (int i = 0; i < tam-1; i++)
        {
            if ( lista[i].calcularKDA() < lista[i+1].calcularKDA() )
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
