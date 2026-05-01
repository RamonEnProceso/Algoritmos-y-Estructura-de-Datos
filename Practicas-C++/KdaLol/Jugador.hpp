#ifndef JUGADOR_HPP
#define JUGADOR_HPP

#include <iostream>

class Jugador {

  private:
    std::string nombre;
    int asesinatos;
    int muertes;
    int asistencias;

  public:

  void asignarDatos(std::string n, int a, int m, int as){
    nombre = n;
    asesinatos = a;
    muertes = m;
    asistencias = as;
  };

  float calcularKDA() {

    if (muertes==0)
    {
        return asesinatos+asistencias;
    }
    
    float kda = (float)(asesinatos+asistencias)/muertes;


    return kda;

  };

  std::string nombreEs(){
    return nombre;
  };

};

/*
struct Jugador{
  std::string nombre;
  int asesinatos;
  int muertes;
  int asistencias;  
};
*/

#endif