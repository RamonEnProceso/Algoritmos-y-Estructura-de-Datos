#ifndef CONVERSOR_A_BINARIO_H
#define CONVERSOR_A_BINARIO_H
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

string conversorDecimalBinario (int num) {

    int numCopia = num;
    int resto = 0;

    vector<int> divisiones;
    string binario;

    while (numCopia>=2) {
        resto = numCopia%2;
        numCopia = numCopia/2;

        divisiones.push_back(resto);
      
    }
    divisiones.push_back(numCopia);

    for (int i=divisiones.size()-1; i >= 0; i--){
        binario += divisiones[i] + '0';
    }
    
    return binario;
}


#endif

