#include <iostream>
#include <iomanip>
#include <vector>
#include "Jugador.hpp"
#include "ordenarKDA.hpp"
#include "inputControlador.hpp"

using namespace std;

int main(){

InputControlador controlador;

    controlador.imprimirInicio();

 vector<Jugador> lista = controlador.devolverJugadores();

ordenarPorKDA (lista,lista.size());

cout<<"\n\n"<<endl;

    for (int i = 0; i < lista.size(); i++)
    {
        Jugador *j = &lista[i];

        cout << i+1 << ". "
        << j->nombreEs() << " tuvo un KDA de: " 
        << fixed << setprecision(2) << j->calcularKDA() << endl;

    }

}
