#ifndef CONVERSOR_BINARIO_DECIMAL_H
#define CONVERSOR_BINARIO_DECIMAL_H

#include <iostream>

using namespace std;

int conversorBinarioADecimal (string numBin){
    
    int size = numBin.size();
    int decimal = 0;
    int position = 0;

    for (int i = size-1; i >= 0; i--)
    {
        int cifra = numBin[i] - '0';
        decimal += cifra * (pow(2, position));
        position++;
    }

    return decimal;
}

#endif 