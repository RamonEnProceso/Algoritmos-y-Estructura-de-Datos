#ifndef CONVERSOR_A_BINARIO_H
#define CONVERSOR_A_BINARIO_H
#include <iostream>
#include <cmath>

using namespace std;

int conversorCifraHexDecimal (char hexN){
    switch (hexN)
    {
    case 'A': return 10; break;
    case 'B': return 11; break;
    case 'C': return 12; break;
    case 'D': return 13; break;
    case 'E': return 14; break;
    case 'F': return 15; break;

    default:
        return hexN - '0';
        break;
    }
}

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