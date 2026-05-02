#ifndef CONVERSOR_BINARIO_UNICODE_HPP
#define CONVERSOR_BINARIO_UNICODE_HPP

#include <iostream>

#include "ConversorHexADecimal.h"
#include "ConversorDecimalHex.h"
#include "ConversorDecimalABinario.h"
#include "ConversorBinarioADecimal.h"
#include "ContadorUnicode.hpp"

using namespace std;

string conversorHexaUnicode(string hex){

    string hexUTF = "";

    int decimal = conversorNumHexDecimal(hex);
    string binario = conversorDecimalBinario(decimal);

    unicodeTabla tabla = contadorUnicode(decimal);
    string binarioUTF = tabla.calcularUTF(binario);
    
    hexUTF += conversorDecimalHex(conversorBinarioADecimal(binarioUTF));

    return hexUTF;
}

#endif