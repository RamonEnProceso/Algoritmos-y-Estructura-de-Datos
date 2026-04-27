#include <iostream>
#include <cstdint>

using namespace std;

int main(){

uint8_t A = 255;
uint8_t B = 0;

A += 1;
B -= 1;

cout << (int)  A << endl;
cout << (int) B << endl;

return 0;

}
