#include <iostream>

int main(){
    int valor1 = 1;
    int valor2 = 1;

    int resultado = ++valor1 + valor2++;

    std::printf("valor1: %i, valor2: %i, resultado: %i\n", valor1, valor2, resultado);
}