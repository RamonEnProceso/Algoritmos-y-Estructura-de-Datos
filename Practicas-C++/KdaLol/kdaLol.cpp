#include <iostream>
#include <iomanip>
#include "Jugador.h"
#include "calcularKDA.h"
#include "ordenarKDA.h"

using namespace std;

int main(){

    Jugador ramon;
    ramon.asesinatos=15;
    ramon.muertes=4;
    ramon.asistencias=20;

    Jugador *ramonPtr = &ramon;

    cout<< fixed << setprecision(2) << calcularKDA(*ramonPtr) << endl;

}
