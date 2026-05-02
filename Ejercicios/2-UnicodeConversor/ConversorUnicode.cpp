#include <iostream>
#include "ConversorHexAUnicode.hpp"

using namespace std;

int main(){

    string cifraUnicode;


    cout << "\n\nConversor de Unicode a UTF-8\n\nPor favor ingrese un numero hexadecimal: " << endl;

    cin >> cifraUnicode;

    cout << "UTF-8: 0x" << conversorHexaUnicode("267A") << endl;
    

    return 0;
}