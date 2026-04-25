#include <iostream>

int main(){

int ganancia;

int gananciaMensual;

int alumnos;

int precioXHora;

int horas;

std::cout << "\nEscribi lo que cobrarias por hora:\n";
std::cin >> precioXHora;

std::cout << "\n\nEscribi la cantidad de horas que trabajarias por semana:\n";
std::cin >> horas;

std::cout << "\n\nEscribi la cantidad minima de alumnos que tendrias:\n";
std::cin >> alumnos;

ganancia = horas * precioXHora * alumnos;
gananciaMensual = ganancia*4;

std::cout << "\nSi tuvieras "<<alumnos<<" alumnos y cobraras "<<precioXHora<<" por hora.\n Ganarias: $"<<ganancia<<" por semana"<<std::endl;
std::cout << "\n\nEs decir que en un mes ganarias: $"<< gananciaMensual<<"\n"<< std::endl;

return 0;

}
