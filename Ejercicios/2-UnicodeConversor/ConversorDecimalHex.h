#ifndef CONVERSOR_DECIMAL_HEX_H
#define CONVERSOR_DECIMAL_HEX_H
#include <iostream>
#include <vector>

#include "ConversorCifrasHex.h"

using namespace std;

string conversorDecimalHex (int num) {

    int numCopia = num;
    int resto = 0;

    vector<char> divisiones;
    string hexadecimal;

    while (numCopia>=16) {
        resto = numCopia%16;
        numCopia = numCopia/16;

        divisiones.push_back(conversorCifraDecimalHex(resto)); 
    }
    divisiones.push_back(conversorCifraDecimalHex(numCopia));

    for (int i=divisiones.size()-1; i >= 0; i--){
        hexadecimal += divisiones[i];
    }
    
    return hexadecimal;
}


#endif

