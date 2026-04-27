#include "PersonaStruct.h"

void encontrarMayor(Persona &x, Persona &y, bool &esOrdenado){
    Persona mayor;
    if (x.num < y.num)
    {
        mayor = y;
        y = x;
        x = mayor;
        esOrdenado = false;
    }
};

void encontrarMenor(Persona &x, Persona &y, bool &esOrdenado){
    Persona menor;
    if (x.num > y.num)
    {
        menor = y;
        y = x;
        x = menor;
        esOrdenado = false;
    }
};