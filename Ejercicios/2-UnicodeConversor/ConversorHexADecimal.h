#ifndef CONVERSOR_HEX_DECIMAL_H
#define CONVERSOR_HEX_DECIMAL_H
#include <iostream>
#include <cmath>

#include "ConversorCifrasHex.h"

using namespace std;


int conversorNumHexDecimal (string numHex){
    
    int size = numHex.size();
    int decimal = 0;
    int position = 0;

    for (int i = size-1; i >= 0; i--)
    {
        decimal += conversorCifraHexDecimal(numHex[i]) * (pow(16, position));
        position++;
    }

    return decimal;
}


#endif