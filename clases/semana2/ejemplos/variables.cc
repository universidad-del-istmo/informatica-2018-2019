#include <iostream>

int main(){
    const float pi= 3.14;
    int radio = 2;
    float area;

    radio++;
    area = pi*radio*radio;

    radio += 6;

    std::printf("El radio es %i", radio);

    float area2 = pi * radio * radio;

    std::printf("El area 1 es %f", area);
    std::printf("El area 2 es %f", area2);
}