#include <iostream>
#include <string>

int main(){

class QuieroKeke{

    private:

    std::string nombreJugador = "Advincula";

    public:

    void preguntar(){
        std::cout << "¿Quiero keke?" << std::endl;
    }

    void cambiarNombre(){
        std::string nuevoNombre;
        std::cout<<"\n\nIngrese el nuevo nombre mboeeee: "<<std::endl;
        std::getline(std::cin,nuevoNombre);
        nombreJugador = nuevoNombre;
    }

    void preguntarNombre (){
        std::cout << nombreJugador << "????" << std::endl;
    }

    
};


QuieroKeke miKeke;

miKeke.preguntar();
miKeke.preguntarNombre();
miKeke.cambiarNombre();
miKeke.preguntarNombre();


}