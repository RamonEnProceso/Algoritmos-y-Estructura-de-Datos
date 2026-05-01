#include <iostream>
#include <iomanip>
#include "Jugador.hpp"
#include "ordenarKDA.h"

using namespace std;

int main(){

    Jugador ramon;
    ramon.asignarDatos("Ramon",13,3,9);

    Jugador lauti;
    lauti.asignarDatos("Lauty",13,4,14);

    Jugador manuel;
    manuel.asignarDatos("Manuel",9,6,6);

    Jugador lista[] = {ramon,lauti,manuel};

    ordenarPorKDA(lista,3);

    for (int i = 0; i < 3; i++)
    {
        Jugador *j = &lista[i];

        cout << i+1 << ". "
        << j->nombreEs() << " tuvo un KDA de: " 
        << fixed << setprecision(2) << j->calcularKDA() << endl;

    }

}
