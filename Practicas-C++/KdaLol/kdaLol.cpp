#include <iostream>
#include <iomanip>
#include "Jugador.h"
#include "asignarPuntos.h"
#include "ordenarKDA.h"

using namespace std;

int main(){

    Jugador ramon;
    asignarPuntos(ramon,"Ramon",13,3,9);

    Jugador lauti;
    asignarPuntos(lauti,"Lauty",13,4,14);

    Jugador manuel;
    asignarPuntos(manuel,"Manuel",9,6,6);

    Jugador lista[] = {ramon,lauti,manuel};

    ordenarPorKDA(lista,3);

    for (int i = 0; i < 3; i++)
    {
        Jugador *j = &lista[i];
        cout << i+1 << ". "<< lista[i].nombre << " tuvo un KDA de: " << fixed << setprecision(2) << calcularKDA(*j) << endl;
    }

}
