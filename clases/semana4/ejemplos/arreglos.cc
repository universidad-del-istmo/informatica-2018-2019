#include <iostream>

int numeros[] = {1,2,3,4};
int valor = 5;

int main(){
    
    printf("El primer elemento %i\n", numeros[1]);

    char nombre[] = "informatica2";

    printf("La cadena es %s\n", nombre);

    nombre[4] = '4';

    printf("La cadena es %s\n", nombre);

    char* nombre2 = nombre;

    nombre2[5] = 'x';

    printf("El nombre 2 es %s\n", ++nombre2);
    printf("La cadena es %s\n", nombre);

    for(int i = 0; i < 5; i++){
        printf("La letra es %c\n", nombre[i]);
    }

    for(char* c = nombre; c != &nombre[5]; c++){
        printf("La letra es %c\n", *c);
    }
}