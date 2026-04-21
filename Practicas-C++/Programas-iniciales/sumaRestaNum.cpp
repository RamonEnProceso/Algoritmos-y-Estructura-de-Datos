#include <iostream>

int main(){

char opt;
int num1;
int num2;
int sum;


std::cout <<  "\nIngrese si quiere sumar(S) o restar (R):\n";
std::cin  >> opt;

std::cout << "\nIngrese el primer número:\n";
std::cin >> num1;

std::cout << "\nIngrese el segundo número:\n";
std::cin >> num2;

if (opt == 'S'){
  sum = num1+num2;
}if(opt=='R'){
  sum = num1-num2;
}

std::cout << "\nResultado: " << sum << std::endl;

return 0;

}
