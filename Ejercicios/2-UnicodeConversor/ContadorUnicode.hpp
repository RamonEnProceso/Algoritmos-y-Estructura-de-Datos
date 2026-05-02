#ifndef CONTADOR_UNICODE_HPP
#define CONTADOR_UNICODE_HPP

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class unicodeTabla {
    private:
        string codigoBinarioInit = "0";
        int bitsCeldaInit = 7;
        int columnasNum = 0;
    public:
        void establecerBinarios(string inicial, int columnas){
            codigoBinarioInit = inicial;
            bitsCeldaInit = 8 - inicial.size();
            columnasNum = columnas-1;
        } 

        string calcularUTF (string binario){
            string binarioRelleno = "";
            string binarioUTF = codigoBinarioInit;
            int aRellenar = bitsCeldaInit;
            
            if (columnasNum > 0){
                aRellenar += 6*columnasNum;
            }

            for (int i = 0; i<aRellenar; i++){
                binarioRelleno += "0";
            }

            binarioRelleno.erase(binarioRelleno.size()-binario.size(), binario.size());
            binarioRelleno += binario;

            binarioUTF = codigoBinarioInit + binarioRelleno.substr(0,bitsCeldaInit);
            binarioRelleno = binarioRelleno.erase(0,bitsCeldaInit);

            if (columnasNum > 0){
                for (int i = 0; i < columnasNum; i++){
                    binarioUTF += "10" + binarioRelleno.substr(0,6);
                    binarioRelleno = binarioRelleno.erase(0,6);
            }
            }
            
            return binarioUTF;
        }
};

unicodeTabla contadorUnicode (int n){

    unicodeTabla tabla;

    if(n>=65536){
        tabla.establecerBinarios("11110",4);
        return tabla;
    }if(n>=2048){
        tabla.establecerBinarios("1110",3);
        return tabla;
    }if(n>=128){
        tabla.establecerBinarios("110",2);
        return tabla;
    }else{
        tabla.establecerBinarios("0",1);
        return tabla;
    }

}

#endif