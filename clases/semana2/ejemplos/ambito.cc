#include <iostream>

int main(){

    int valor = 42;
    {
        int valor = 43;
        printf("El valor es %i", valor);
    }

    printf("El valor es %i", valor);
}