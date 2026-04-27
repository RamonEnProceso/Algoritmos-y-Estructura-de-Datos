#include <iostream>
#include <random>
#include "PersonaStruct.h"
#include "OrdenarArr.h"
using namespace std;

int main()
{
    Persona Chano, Pachano, RicardoFort, SusanaGimenez;

    // Acá estoy haciendo un generador de numeros aleatorios con máximo y mínimo
    // Esto lo hice con una librería externa
    const int min = 0;
    const int max = 100;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(min, max);

    //Asigno los valores para cada nombre
    
    Chano.nombre = "Chano Charpentier";
    Chano.num = distrib(gen);

    Pachano.nombre = "Annibal Pachano";
    Pachano.num = distrib(gen);

    RicardoFort.nombre = "El general Ricardo Fort";
    RicardoFort.num = distrib(gen);

    SusanaGimenez.nombre = "La diva Susana Gimenez";
    SusanaGimenez.num = distrib(gen);

    //Creo la lista con todos los nombres
    Persona personas[] = {Chano,Pachano,RicardoFort,SusanaGimenez};

    ordenarMayoraMenor(personas,4);

    cout<<"\n";
    for(int i=0; i<4; i++){
        cout << i+1 << ". " << personas[i].nombre << ". Le toco el numero = " << personas[i].num << endl;
    }

    return 0;

}