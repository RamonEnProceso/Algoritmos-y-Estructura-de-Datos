#include <iostream>

int main(){

int num1;
int num2;
int suma;

std::cout << "Ingrese el primer número a sumar:\n";
std::cin >> num1;

std::cout << "Ingrese el segundo número a sumar:\n";
std::cin >> num2;

suma = num1 + num2;

std::cout << "El resultado es: " << suma << std::endl;

return 0;

}
